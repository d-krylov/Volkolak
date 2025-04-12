#ifndef VOLKOLAK_PARSER_H
#define VOLKOLAK_PARSER_H

#include <filesystem>
#include <string>
#include <vector>

namespace Volkolak {

struct EnumRecordData {
  std::string class_name;  // SPARSE_BINDING_BIT
  std::string vulkan_name; // VK_BUFFER_CREATE_SPARSE_BINDING_BIT
  std::string extends;     // VkBufferCreateFlagBits
};

struct EnumData {
  std::string name;   // VkGeometryFlagBitsKHR -> GeometryMaskBit
  std::string prefix; // VkGeometryFlagBitsKHR -> VK_GEOMETRY
  std::vector<EnumRecordData> records;
};

struct StructureMemberData {
  std::string signature; // const PresentMode* present_modes_;
  std::string type;      // PresentMode
  std::string name;      // present_modes_
};

struct ExtensionData {
  std::string platform;
  std::vector<EnumRecordData> records;
};

struct StructureData {
  std::string structure_type;
  std::vector<StructureMemberData> members_;
};

void ParseDocument(const std::filesystem::path &specification_path);

void GenerateEnumFile();
void GenerateEnumDefinitionFile();
void GenerateStructuresFile();

} // namespace Volkolak

#endif // VOLKOLAK_PARSER_H