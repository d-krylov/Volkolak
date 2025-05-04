#include "parser.h"
#include "templates.h"
#include <iostream>
#include <print>
#include <ranges>

namespace Volkolak {

// ATTRIBUTE GETTERS
auto Api = [](const pugi::xml_node &node) -> std::string_view { return node.attribute("api").as_string(); };
auto Name = [](const pugi::xml_node &node) -> std::string_view { return node.attribute("name").as_string(); };
auto Type = [](const pugi::xml_node &node) -> std::string_view { return node.attribute("type").as_string(); };
auto Value = [](const pugi::xml_node &node) -> std::string_view { return node.attribute("value").as_string(); };
auto Values = [](const pugi::xml_node &node) -> std::string_view { return node.attribute("values").as_string(); };
auto Extends = [](const pugi::xml_node &node) -> std::string_view { return node.attribute("extends").as_string(); };
auto Protect = [](const pugi::xml_node &node) -> std::string_view { return node.attribute("protect").as_string(); };
auto Platform = [](const pugi::xml_node &node) -> std::string_view { return node.attribute("platform").as_string(); };
auto Requires = [](const pugi::xml_node &node) -> std::string_view { return node.attribute("requires").as_string(); };
auto Bitvalues = [](const pugi::xml_node &node) -> std::string_view { return node.attribute("bitvalues").as_string(); };
auto Supported = [](const pugi::xml_node &node) -> std::string_view { return node.attribute("supported").as_string(); };

auto Compressed = [](const pugi::xml_node &node) -> std::string_view { return node.attribute("compressed").as_string(); };
auto BlockSize = [](const pugi::xml_node &node) { return node.attribute("blockSize").as_int(); };
auto Texels = [](const pugi::xml_node &node) { return node.attribute("texelsPerBlock").as_int(); };
auto Packed = [](const pugi::xml_node &node) { return node.attribute("packed").as_int(); };
auto Bits = [](const pugi::xml_node &node) { return node.attribute("bits").as_int(); };

auto NAME = [](const pugi::xml_node &node) -> std::string_view { return node.child("name").child_value(); };
auto TYPE = [](const pugi::xml_node &node) -> std::string_view { return node.child("type").child_value(); };
auto ENUM = [](const pugi::xml_node &node) -> std::string_view { return node.child("enum").child_value(); };

// TOOLS
std::size_t Parser::GetEnumRecordPrefixSize(std::string_view source_enum) const {
  if (source_enum == "VkResult") return VULKAN_PREFIX_SIZE;
  const auto &enum_name = type_enums_.at(source_enum);
  return GetPrefixSize(enum_name.GetPrefix());
}

std::string_view Parser::GetTag(std::string_view source_name) const {
  auto tag_function = [&](std::string_view tag) { return source_name.ends_with(tag); };
  auto tag_iterator = std::ranges::find_if(extension_tags_, tag_function);
  return (tag_iterator != extension_tags_.end()) ? *tag_iterator : std::string_view();
}

StructuresSorter::StructuresSorter(std::span<const StructureData> structures) : structures_(structures) {
  for (const auto &[index, structure] : std::views::enumerate(structures_)) {
    name_indices_[structure.name.substr(VULKAN_PREFIX_SIZE)] = index;
  }
}

void StructuresSorter::Sort() {
  for (const auto &[name, index] : name_indices_) DepthFirstSearch(name);
}

void StructuresSorter::DepthFirstSearch(std::string_view name) {
  if (visited_.contains(name)) return;

  visited_.insert(name);

  auto index = name_indices_.at(name);

  for (const auto &member : structures_[index].members) {
    if (name_indices_.contains(member.type)) {
      DepthFirstSearch(member.type);
    }
  }

  result_.emplace_back(name_indices_.at(name));
}

// STRUCTURES PARSING

std::string Parser::GetGeneratedMemberType(std::string_view source_type) const {
  if (type_structures_.contains(source_type)) return std::string(source_type.substr(VULKAN_PREFIX_SIZE));
  if (type_enums_.contains(source_type)) return type_enums_.at(source_type).GetName();
  if (type_masks_.contains(source_type)) return GetNameString(source_type, FLAG_SUFFIX).GetName();
  return std::string(source_type);
}

std::string Parser::GetGeneratedMemberName(std::string_view source_name) const { return HungarianToSnakeCase(source_name).append("_"); }

std::string Parser::GetGeneratedMemberSignature(const pugi::xml_node &member) const {
  auto signature = std::string();
  auto enum_value = std::string(ENUM(member));
  auto type_value = GetGeneratedMemberType(TYPE(member));
  auto name_value = GetGeneratedMemberName(NAME(member));
  for (const auto &node : member.children()) {
    std::string_view name = node.name();
    if (name == "comment") continue;
    if (name == "name") signature += " " + name_value;
    if (name == "type") signature += " " + type_value;
    if (name == "enum") signature += " " + enum_value;
    if (node.type() == pugi::node_pcdata) signature += node.value();
  }
  return signature;
}

void Parser::ParseStructures() {
  auto registry = document_.child("registry");
  for (const auto &structure_xpath_node : registry.select_nodes(structure_query)) {
    auto structure_node = structure_xpath_node.node();
    auto structure_name = Name(structure_node);
    if (disabled_types_.contains(structure_name)) continue;
    auto &structure = parsed_structures_.emplace_back();
    structure.name = structure_name;
    structure.returned = structure_node.attribute("returnedonly").as_bool();
    for (const auto &member_node : structure_node.children("member")) {
      if (member_node.attribute("api").empty() || Api(member_node) == "vulkan") {
        auto &member = structure.members.emplace_back();
        member.signature = GetGeneratedMemberSignature(member_node);
        member.name = GetGeneratedMemberName(NAME(member_node));
        member.type = GetGeneratedMemberType(TYPE(member_node));
        member.value = Values(member_node);
        member.SetArray(member.signature.contains("["));
        member.SetField(member.signature.contains(":"));
        member.SetPointer(member.signature.contains("*"));
        if (parsed_enums_.contains(TYPE(member_node))) {
          member.zero_record = parsed_enums_[TYPE(member_node)].zero_record;
        }
      }
    }
  }
}

void Parser::ParseEnums() {
  auto registry = document_.child("registry");
  for (const auto &enum_node : registry.children("enums")) {
    auto enum_name = Name(enum_node);
    if (Type(enum_node) == "constants" || disabled_types_.contains(enum_name)) continue;
    auto &enum_data = parsed_enums_[enum_name];
    auto size = GetEnumRecordPrefixSize(enum_name);
    for (const auto &enum_record_node : enum_node.children("enum")) {
      if (enum_record_node.attribute("deprecated").empty()) {
        auto name = Name(enum_record_node);
        auto enum_value = Value(enum_record_node);
        enum_data.records.emplace_back(name.substr(size), name, enum_name);
        if (enum_value == "0") enum_data.zero_record = name.substr(size);
      }
    }
  }
}

void Parser::ParseFeatures() {
  auto registry = document_.child("registry");
  for (const auto &feature_node : registry.children("feature")) {
    if (Api(feature_node) == "vulkansc") continue;
    auto feature_name = Name(feature_node);
    auto &feature = parsed_features_[feature_name];
    for (const auto &require_node : feature_node.children("require")) {
      for (const auto &enum_node : require_node.children("enum")) {
        auto extend_name = Extends(enum_node);
        auto record_name = Name(enum_node);
        if (extend_name.empty() || disabled_types_.contains(extend_name)) continue;
        auto size = GetEnumRecordPrefixSize(extend_name);
        feature.enum_records.emplace_back(record_name.substr(size), record_name, extend_name);
      }
    }
  }
}

void Parser::ParseExtensions() {
  auto extensions = document_.child("registry").child("extensions");
  for (const auto &extension_node : extensions.children("extension")) {
    auto supported = Supported(extension_node);
    auto extension_name = Name(extension_node);
    if (supported == "vulkansc" || supported == "disabled") continue;
    auto &extension = parsed_extensions_[extension_name];
    for (const auto &require_node : extension_node.children("require")) {
      for (const auto &enum_node : require_node.children("enum")) {
        auto extend_name = Extends(enum_node);
        if (disabled_types_.contains(extend_name)) continue;
        if (enum_node.attribute("alias") && options_.generate_alias_enums_records == false) continue;
        auto record_name = Name(enum_node);
        if ((extend_name.empty() == false) && (Api(enum_node).empty() || Api(enum_node) == "vulkan")) {
          auto size = GetEnumRecordPrefixSize(extend_name);
          extension.enum_records.emplace_back(record_name.substr(size), record_name, extend_name);
        }
      }
    }
  }
}

void Parser::GenerateFormatFile() {
  std::string result;
  constexpr std::string_view format_prefix = "VK_FORMAT_";
  for (const auto &format : document_.child("registry").child("formats")) {
    auto format_name = Name(format).substr(format_prefix.size());
    auto compressed = Compressed(format);

    auto get_component = [&](const pugi::xml_node &node) {
      return std::format(format_component_template, Name(node), compressed.empty() ? Bits(node) : 0);
    };

    // clang-format off
    auto components = format.children("component") 
      | std::views::transform(get_component)
      | std::views::join_with(',') 
      | std::ranges::to<std::string>();
    // clang-format on

    result += std::format(format_table_element_template, format_name, BlockSize(format), Texels(format), components);
  }

  std::cout << result << std::endl;
}

// START PARSING

String Parser::GetNameString(std::string_view source_name, std::string_view suffix) const {
  String result;
  result.tag = GetTag(source_name);
  source_name.remove_suffix(result.tag.size());
  if (auto position = source_name.find(suffix); position != std::string::npos) {
    result.prefix = source_name.substr(0, position);
    result.center = source_name.substr(position, suffix.size());
    result.suffix = source_name.substr(position + suffix.size());
  } else {
    result.prefix = source_name;
  }
  return result;
}

void Parser::ParseBeginExtensions() {
  auto registry = document_.child("registry");
  auto platforms_data = std::unordered_map<std::string_view, std::string_view>();

  for (const auto &p : registry.child("platforms")) platforms_data.emplace(Name(p), Protect(p));

  for (const auto &xpath_extension_node : registry.select_nodes(protected_extension_query)) {
    auto extension_node = xpath_extension_node.node();
    auto platforms_name = Platform(extension_node);

    for (const auto &require_node : extension_node.children("require")) {
      for (const auto &structure_node : require_node.children("type")) {
        protected_structures_.emplace(Name(structure_node), platforms_data[platforms_name]);
        protected_extensions_.emplace(Name(extension_node), platforms_data[platforms_name]);
      }
    }
  }
}

void Parser::ParseBeginMasks() {
  for (const auto &mask_xpath_node : document_.select_nodes(mask_query)) {
    auto mask_node = mask_xpath_node.node();
    auto name = NAME(mask_node);
    auto type = TYPE(mask_node);
    if (auto requires_name = Requires(mask_node); requires_name.empty() == false) type = requires_name;
    if (auto bitvalues_name = Bitvalues(mask_node); bitvalues_name.empty() == false) type = bitvalues_name;
    type_masks_.emplace(name, type);
  }
}

void Parser::ParseBegin() {
  auto registry = document_.child("registry");

  for (const auto &t : registry.child("tags")) extension_tags_.emplace_back(Name(t));
  for (const auto &b : registry.select_nodes(structure_query)) type_structures_.emplace(Name(b.node()));
  for (const auto &s : registry.select_nodes(vulkansc_types_query)) disabled_types_.emplace(Name(s.node()));
  for (const auto &s : registry.select_nodes(disabled_types_query)) disabled_types_.emplace(Name(s.node()));
  for (const auto &enum_node : registry.select_nodes(enum_query)) {
    auto node = enum_node.node();
    auto name = Name(node);
    type_enums_.emplace(name, GetNameString(name, FLAG_BITS_SUFFIX));
  }

  disabled_types_.erase("VkPipelineCacheCreateFlagBits");

  ParseBeginMasks();
  ParseBeginExtensions();
}

// GENERATE STRUCTURES

constexpr std::string_view STRUCTURE_TYPE_PREFIX = "VK_STRUCTURE_TYPE";

std::string GetStructureType(std::string_view source_type) {
  constexpr std::string_view format = "StructureType::E{}";
  constexpr auto prefix_size = STRUCTURE_TYPE_PREFIX.size();
  return std::format(format, source_type.substr(prefix_size));
}

auto GenerateSignature(const StructureMemberData &member) {
  constexpr auto simple = "{0} {1}";
  constexpr auto valued = "{0} = {1}";
  auto type = member.IsArray() ? GetRandomTypeAsArray(member.signature, member.type) : member.type;
  auto signature = member.value.empty() ? member.signature : std::format(valued, member.signature, GetStructureType(member.value));
  return member.IsArray() ? std::format(simple, type, member.name) : signature;
}

auto GenerateArgument(const StructureMemberData &member) {
  std::string_view signature = member.signature;
  std::string_view name = member.name;
  constexpr auto basic_format = "      {0}      = {{}}";
  constexpr auto enums_format = "      {0}      = {1}::E{2}";
  constexpr auto const_format = "const {0} &{1} = {{}}";
  auto prune = signature.substr(0, signature.find(":"));
  prune.remove_suffix(1), name.remove_suffix(1);
  std::string base;
  if (member.zero_record.empty() || member.IsPointer()) {
    base = std::format(basic_format, prune);
  } else {
    base = std::format(enums_format, prune, member.type, member.zero_record);
  }
  auto type = member.IsArray() ? GetRandomTypeAsArray(member.signature, member.type) : member.type;
  return member.IsArray() ? std::format(const_format, type, name) : base;
}

auto GenerateInitializer(const StructureMemberData &member) {
  constexpr auto initializer_format = "{0}({1})";
  std::string_view argument = member.name;
  argument.remove_suffix(1);
  return std::format(initializer_format, member.name, argument);
}

void Parser::SortArguments(std::span<StructureMemberData> arguments) {
  if (auto it = std::ranges::find(arguments, "p_next_", &StructureMemberData::name); it != arguments.end()) {
    std::ranges::swap(*it, arguments.back());
  }
}

void Parser::GenerateStructureFile() {
  std::string result;

  StructuresSorter sorter(parsed_structures_);
  sorter.Sort();

  for (const auto &structure_index : sorter.GetIndices()) {
    std::string members;
    auto &structure = parsed_structures_[structure_index];
    auto name = structure.name.substr(VULKAN_PREFIX_SIZE);
    for (const auto &member : structure.members) members += GenerateSignature(member) + ";\n";
    SortArguments(structure.members);
    auto filtered = structure.members | std::views::filter([](const StructureMemberData &member) { return member.value.empty(); });
    auto arguments = filtered | std::views::transform(GenerateArgument) | std::views::join_with(',') | std::ranges::to<std::string>();
    auto initializer = filtered | std::views::transform(GenerateInitializer) | std::views::join_with(',') | std::ranges::to<std::string>();

    constexpr auto constructor_template = "{0}({1}): {2} {{}}";
    auto constuctor = (structure.returned == false) ? std::format(constructor_template, name, arguments, initializer) : "";
    auto first_member = structure.members.front();
    auto prefix_size = STRUCTURE_TYPE_PREFIX.size();
    auto structure_type = first_member.value.empty() ? "" : std::format(structure_type_template, first_member.value.substr(prefix_size));
    auto structure_definition = std::format(structure_template, name, members, constuctor, structure_type);
    if (protected_structures_.contains(structure.name)) {
      if (options_.generate_protected_structure) {
        result += std::format(ifdef_template, protected_structures_[structure.name], structure_definition);
      }
    } else {
      result += structure_definition;
    }
  }

  std::cout << result << std::endl;
}

// GENERATE ENUMS

auto get_enum_record = [](const EnumRecordData &record) { return std::format("{} = {},\n", record.GetName(), record.source_name); };

// clang-format off
template <typename F>
std::string GetEnumRecords(F &&functor, std::span<const EnumRecordData> records, std::string_view enum_name) {
  auto is_good_enum = [&](const EnumRecordData &enum_record) { return enum_record.parent_enum == enum_name; };
  auto records_view = records
    | std::views::filter(is_good_enum)
    | std::views::transform(functor)
    | std::views::join;
  return std::ranges::to<std::string>(records_view);
}
// clang-format on

void Parser::GenerateEnumRecordsFromExtensions(std::string &records_result, std::string_view enum_name) {
  for (const auto &[extension_name, extension_data] : parsed_extensions_) {
    if (protected_extensions_.contains(extension_name) && options_.generate_protected_enums_records == false) continue;
    auto records_string = GetEnumRecords(get_enum_record, extension_data.enum_records, enum_name);
    if (records_string.empty()) continue;
    if (auto enum_protected = protected_extensions_.find(extension_name); enum_protected != protected_extensions_.end()) {
      records_result += std::format(ifdef_template, enum_protected->second, records_string);
    } else {
      records_result += records_string;
    }
  }
}

void Parser::GenerateEnumRecordsFromFeatures(std::string &records_result, std::string_view enum_name) {
  for (const auto &[feature_name, feature_data] : parsed_features_) {
    auto records_string = GetEnumRecords(get_enum_record, feature_data.enum_records, enum_name);
    if (records_string.empty()) continue;
    records_result += records_string;
  }
}

void Parser::GenerateEnumFile() {
  namespace views = std::views;
  std::string result;
  for (auto &[enum_name, enum_data] : parsed_enums_) {
    auto enum_records_view = enum_data.records | views::transform(get_enum_record) | views::join;
    auto enum_records_string = std::ranges::to<std::string>(enum_records_view);
    GenerateEnumRecordsFromFeatures(enum_records_string, enum_name);
    GenerateEnumRecordsFromExtensions(enum_records_string, enum_name);
    if (auto comma = enum_records_string.find_last_of(','); comma != std::string::npos) enum_records_string.erase(comma, 1);
    const auto &enum_string = type_enums_[enum_name];
    if (enum_string.IsMaskBit()) {
      result += std::format(mask_template, enum_string.GetName(), enum_records_string, enum_string.GetFlags());
    } else {
      result += std::format(enum_template, enum_string.GetName(), enum_records_string);
    }
  }

  std::cout << result << std::endl;
}

void Parser::GenerateStringToolsFile() {
  for (const auto &[enum_name, enum_data] : parsed_enums_) {
    const auto &enum_class_name = type_enums_[enum_name].GetName();
    auto get_enum_case = [&](const EnumRecordData &record) { return std::format(enum_case_template, enum_class_name, record.GetName()); };
    auto enum_records_view = enum_data.records | std::views::transform(get_enum_case) | std::views::join;
    auto enum_records_string = std::ranges::to<std::string>(enum_records_view);

    for (const auto &[extension_name, extension_data] : parsed_extensions_) {
      if (protected_extensions_.contains(extension_name) && options_.generate_protected_enums_records == false) continue;
      auto records_string = GetEnumRecords(get_enum_case, extension_data.enum_records, enum_name);
      if (records_string.empty()) continue;
      if (auto enum_protected = protected_extensions_.find(extension_name); enum_protected != protected_extensions_.end()) {
        enum_records_string += std::format(ifdef_template, enum_protected->second, records_string);
      } else {
        enum_records_string += records_string;
      }
    }

    for (const auto &[feature_name, feature_data] : parsed_features_) {
      auto records_string = GetEnumRecords(get_enum_case, feature_data.enum_records, enum_name);
      if (records_string.empty()) continue;
      enum_records_string += records_string;
    }

    std::cout << std::format(enum_to_string_template, enum_class_name, enum_records_string) << std::endl;
  }
}

void Parser::GenerateMaskFile() {
  std::string result;
  for (const auto &[key, value] : type_masks_) {
    auto name = GetNameString(key, FLAG_SUFFIX);
    auto mask = type_enums_.contains(value) ? type_enums_.at(value).GetName() : std::string(value);
    result += std::format(using_mask_template, name.GetName(), mask);
  }

  std::cout << result << std::endl;
}

Parser::Parser(const std::filesystem::path &specification_path) {

  auto status = document_.load_file(specification_path.c_str());

  if (!status) std::println("Loading error - {}", status.description());

  ParseBegin();
  ParseEnums();
  ParseFeatures();
  ParseExtensions();
  ParseStructures();
}

} // namespace Volkolak