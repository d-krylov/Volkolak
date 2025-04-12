#include "parser.h"
#include "pugixml.hpp"
#include "tools.h"
#include <algorithm>
#include <format>
#include <iostream>
#include <ranges>
#include <set>
#include <unordered_map>
#include <unordered_set>

namespace Volkolak {

pugi::xml_document document;
std::vector<std::string> tags;
std::unordered_map<std::string, std::unordered_set<std::string>> source_enums;
std::unordered_map<std::string, std::string> platforms;
std::unordered_map<std::string, EnumData> enums;
std::unordered_map<std::string, ExtensionData> extensions;
std::unordered_map<std::string, StructureData> structures;

// VkDebugReportFlagBitsEXT -> VkDebugReport
std::string GetPureEnumName(std::string_view enum_name) {
  std::string_view mask = "FlagBits";
  auto suffix_name = std::ranges::find_if(tags, [&](const auto &suffix) { return enum_name.ends_with(suffix); });
  enum_name.remove_suffix(suffix_name != tags.end() ? suffix_name->size() : 0);
  auto back = enum_name.back();
  auto is_digit = std::isdigit(back);
  enum_name.remove_suffix(is_digit ? 1 : 0);
  enum_name.remove_suffix(enum_name.ends_with(mask) ? mask.size() : 0);
  return std::string(enum_name) + (is_digit ? std::string(1, back) : "");
}

EnumRecordData GetEnumRecordData(std::string_view record_name, const EnumData &enum_data) {
  EnumRecordData record_data;
  record_data.vulkan_name = std::string(record_name);
  record_name.remove_prefix(enum_data.prefix.size() + 1);
  auto starts_with_digit = std::isdigit(record_name.front());
  record_data.class_name = starts_with_digit ? std::format("E_{}", record_name) : std::string(record_name);
  return record_data;
}

void ParseEnums() {
  for (const auto &enum_node : document.child("registry").children("enums")) {
    std::string_view enum_name = enum_node.attribute("name").as_string();
    std::string_view enum_type = enum_node.attribute("type").as_string();
    if (enum_type != "constants") {
      auto &enum_data = enums[enum_name.data()];
      auto pure_name_v = GetPureEnumName(enum_name);
      enum_data.prefix = ToScreamingSnakeCase(pure_name_v);
      auto pure_name = pure_name_v.substr(2);
      enum_data.name = pure_name + ((enum_type == "bitmask") ? "MaskBit" : "");
      for (const auto &enum_record : enum_node.children("enum")) {
        std::string record_name = enum_record.attribute("name").as_string();
        if (record_name.starts_with(enum_data.prefix)) {
          enum_data.records.emplace_back(GetEnumRecordData(record_name, enum_data));
          source_enums[enum_name.data()].emplace(record_name);
        }
      }
    }
  }
}

void ParseExtensions() {
  for (const auto &extension_node : document.child("registry").child("extensions")) {
    std::string_view extension_supported = extension_node.attribute("supported").as_string();
    if (extension_supported == "disabled") {
      continue;
    }

    auto extension_name = extension_node.attribute("name");
    auto &extension = extensions[extension_name.as_string()];
    extension.platform = extension_node.attribute("platform").as_string();

    for (const auto &require_node : extension_node.children("require")) {
      for (const auto &enum_record : require_node.children("enum")) {
        std::string record_name = enum_record.attribute("name").as_string();
        std::string extend_enum = enum_record.attribute("extends").as_string();
        if (extend_enum.empty() == false) {
          auto &enum_data = enums[extend_enum];
          if (record_name.starts_with(enum_data.prefix) && source_enums[extend_enum].contains(record_name) == false) {
            auto &record = extension.records.emplace_back(GetEnumRecordData(record_name, enum_data));
            record.extends = extend_enum;
            source_enums[extend_enum].emplace(record_name);
          }
        }
      }
    }
  }
}

StructureMemberData GetStructureMemberData(const pugi::xml_node &member) {
  StructureMemberData result;
  for (const auto &node : member.children()) {
    std::string_view name = node.name();
    if (node.type() == pugi::node_pcdata) {
      result.signature += node.value();
    } else if (name == "name") {
      result.name = HungarianToSnakeCase(node.child_value());
      result.signature += std::format(" {}", result.name);
    } else if (name == "type") {
      auto type = node.child_value();
      result.type = enums.contains(type) ? enums[type].name : type;
      result.signature += std::format(" {}", result.type);
    } else if (name != "comment") {
      result.signature += std::format(" {}", node.child_value());
    }
  }
  return result;
}

void ParseStructures() {
  for (const auto &type : document.child("registry").child("types")) {
    auto category = type.attribute("category");
    if (category) {
      std::string_view category_name = category.as_string();
      if (category_name == "struct") {
        auto structure_name = type.attribute("name");
        auto alias_name = type.attribute("alias");
        if (alias_name) {
        } else {
          auto &structure = structures[structure_name.as_string()];
          for (const auto &member : type.children("member")) {
            auto structure_member = GetStructureMemberData(member);
            structure.members_.emplace_back(structure_member);
          }
        }
      }
    }
  }
}

void ParseHeader() {
  auto name_to_string = [](const pugi::xml_node &node) { return std::string(node.attribute("name").as_string()); };
  tags = document.child("registry").child("tags") | std::views::transform(name_to_string) | std::ranges::to<std::vector>();
  for (const auto &platform : document.child("registry").child("platforms")) {
    auto name = platform.attribute("name").as_string();
    auto protect = platform.attribute("protect").as_string();
    platforms[name] = protect;
  }
}

void ParseDocument(const std::filesystem::path &specification_path) {
  auto status = document.load_file(specification_path.c_str());

  if (status) {
    ParseHeader();
    ParseEnums();
    ParseExtensions();
    ParseStructures();
  }
}

constexpr auto begin_definition = R"(
#ifndef {0}
#define {0}(N)
#endif
)";

constexpr auto enum_definition_template = R"(
enum class {0} {{
#define {1}(X) X = {2}##X,
#include "{3}"
}};
)";

void GenerateEnumDefinitionFile() {
  std::string result;

  for (auto &[enum_name, enum_data] : enums) {

    for (const auto &record : enum_data.records) {
    }
  }

  std::cout << result << std::endl;
}

constexpr auto enum_template = R"(
enum class {0} {{
  {1}
}};
)";

void GenerateEnumFile() {
  std::string result;
  for (auto &[enum_name, enum_data] : enums) {
    std::string enum_records;

    for (const auto &record : enum_data.records) {
      enum_records += record.class_name + " = " + record.vulkan_name + "," + "\n";
    }

    auto good_extension = [&](const EnumRecordData &a) { return a.extends == enum_name; };

    for (auto &[extesion_name, extension_data] : extensions) {
      std::string collected_enums;

      for (const auto &record : std::views::filter(extension_data.records, good_extension)) {
        collected_enums += record.class_name + " = " + record.vulkan_name + "," + "\n";
      }

      if (platforms.contains(extension_data.platform) && collected_enums.empty() == false) {
        enum_records += "#ifdef " + platforms[extension_data.platform] + "\n";
        enum_records += collected_enums;
        enum_records += "#endif\n";
      } else if (collected_enums.empty() == false) {
        enum_records += collected_enums;
      }
    }

    result += std::format(enum_template, enum_data.name, enum_records);
  }

  // std::cout << result << std::endl;
}

constexpr auto structure_template = R"(
struct {0} {{

  using native_type = Vk{0};

  {0}({2}): {3} {{}}

  auto *get() {{ return reinterpret_cast<native_type *>(this); }}

  {1}
}};
)";

void GenerateStructuresFile() {
  std::string result;
  auto concate = [](const auto &a, const auto &b) { return a + "," + b; };
  for (auto &[name, value] : structures) {
    auto signatures = std::views::transform(value.members_, &StructureMemberData::signature);
    auto names = std::views::transform(value.members_, &StructureMemberData::name);
    auto is_structure_type = names.front() == "s_type";
    auto signatures_for_arguments = signatures | std::views::drop(is_structure_type ? 1 : 0);
    auto initializer = std::views::transform(names, [](const auto &a) { return std::format("{0}_({0})", a); });
    auto initializers = std::ranges::fold_left_first(initializer, concate);
    auto arguments = std::ranges::fold_left_first(signatures_for_arguments, concate);
    auto fields = std::ranges::fold_left(signatures, std::string(""), [](const auto &a, const auto &b) { return a + b + "_;\n"; });
    result += std::format(structure_template, name.substr(2), fields, *arguments, *initializers);
  }

  std::cout << result << std::endl;
}

} // namespace Volkolak