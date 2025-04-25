#ifndef VOLKOLAK_PARSER_H
#define VOLKOLAK_PARSER_H

#define PUGIXML_HAS_STRING_VIEW
#include "pugixml.hpp"
#include "tools.h"
#include <bitset>
#include <unordered_map>
#include <unordered_set>
#include <vector>

namespace Volkolak {

// ENUMS
struct EnumRecordData {
  std::string_view class_name;
  std::string_view source_name;
  std::string_view extend_enum;
};

struct EnumData {
  std::vector<EnumRecordData> records;
};

struct ExtensionData {
  std::vector<EnumRecordData> enum_records;
};

struct FeatureData {
  std::vector<EnumRecordData> enum_records;
};

// clang-format off
struct StructureMemberData {
  bool IsArray() const { return status.test(0); }
  bool IsField() const { return status.test(1); }

  void SetArray(bool f) { status.set(0, f); }
  void SetField(bool f) { status.set(1, f); }
 
  std::bitset<2> status;
  std::string signature;
  std::string name;
  std::string type;
  std::string_view value;
};
// clang-format on

struct StructureData {
  bool returned = false;
  std::string_view name;
  std::vector<StructureMemberData> members;
};

struct Options {
  bool generate_contructor_returned = false;
  bool generate_protected_structure = false;
};

class StructuresSorter {
public:
  StructuresSorter(std::span<const StructureData> structures);

  void Sort();

  std::span<const uint32_t> GetIndices() { return result_; }

private:
  void DepthFirstSearch(std::string_view name);

private:
  std::vector<uint32_t> result_;
  std::span<const StructureData> structures_;
  std::unordered_set<std::string_view> visited_;
  std::unordered_map<std::string_view, uint32_t> name_indices_;
};

class Parser {
public:
  Parser(const std::filesystem::path &specification_path);

  void GenerateEnumFile();
  void GenerateEnumDefinitionFile();
  void GenerateStructureFile();

  void PrintInformation();

private:
  // MAIN PARSE
  void ParseEnums();
  void ParseFeatures();
  void ParseBegin();
  void ParseBeginExtensions();
  void ParseStructures();
  void ParseExtensions();

  // TOOLS
  std::string GetEnumRecordPrefix(std::string_view enum_name) const;
  std::size_t GetEnumRecordPrefixSize(std::string_view enum_name) const;
  std::string_view GetTag(std::string_view source_name) const;

  // PARSE START
  String GetNameString(std::string_view source_name) const;

  // STRUCTURES PARSING
  std::string GetGeneratedMemberType(std::string_view source_type) const;
  std::string GetGeneratedMemberName(std::string_view source_name) const;
  std::string GetGeneratedMemberSignature(const pugi::xml_node &member) const;

  // GENERATE ENUMS
  void GenerateEnumRecordsFromFeatures(std::string &enum_return, std::string_view enum_name);
  void GenerateEnumRecordsFromExtensions(std::string &enum_return, std::string_view enum_name);

  void SortStructures();

private:
  pugi::xml_document document_;
  // After ParseBegin
  std::vector<std::string_view> extension_tags_;                                // registry/tags
  std::unordered_map<std::string_view, std::string_view> type_masks_32_;        // registry/types/type (bitmask, requires, VkFlags)
  std::unordered_map<std::string_view, std::string_view> type_masks_64_;        // registry/types/type (bitmask, VkFlags64)
  std::unordered_map<std::string_view, std::string_view> protected_extensions_; // registry/extensions/extension
  std::unordered_map<std::string_view, std::string_view> protected_structures_; // registry/extensions/extension
  std::unordered_map<std::string_view, String> type_enums_;                     // registry/types/type (enum)
  std::unordered_set<std::string_view> type_empty_masks_;                       // registry/types/type (bitmask, no requires, VkFlags)
  std::unordered_set<std::string_view> type_structures_;                        // registry/types/type (structure)
  std::unordered_set<std::string_view> disabled_types_;

  std::vector<StructureData> parsed_structures_;                          // After ParseStructures
  std::unordered_map<std::string_view, EnumData> parsed_enums_;           // After ParseEnums
  std::unordered_map<std::string_view, FeatureData> parsed_features_;     // After ParseFeatures
  std::unordered_map<std::string_view, ExtensionData> parsed_extensions_; // After ParseExtensions

  Options options_;
};

} // namespace Volkolak

#endif // VOLKOLAK_PARSER_H