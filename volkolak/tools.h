#ifndef VOLKOLAK_TOOLS_H
#define VOLKOLAK_TOOLS_H

#include <filesystem>
#include <string>

namespace Volkolak {

void WriteToFile(const std::filesystem::path &output_path, const std::string &value);

std::string ToScreamingSnakeCase(std::string_view name);
std::string HungarianToSnakeCase(std::string_view name);
std::string GetRandomTypeAsArray(std::string_view text, std::string_view base_type);
std::size_t GetPrefixSize(std::string_view name);

inline constexpr std::string_view FLAG_SUFFIX = "FlagBits";
inline constexpr std::string_view MASK_SUFFIX = "MaskBit";
inline constexpr std::string_view VULKAN_PREFIX = "VK";

inline constexpr auto VULKAN_PREFIX_SIZE = VULKAN_PREFIX.size();
inline constexpr auto MASK_SUFFIX_SIZE = MASK_SUFFIX.size();
inline constexpr auto FLAG_SUFFIX_SIZE = FLAG_SUFFIX.size();

struct String {
  std::string Get() const;
  std::string GetName() const;
  std::string GetPrefix() const;

  bool IsMask() const { return center == FLAG_SUFFIX; }

  std::string_view prefix; // all string without tag or string before FlagBits
  std::string_view center; // empty or FlagBits
  std::string_view suffix; // between FlagBits and tag or empty
  std::string_view tag;
};

} // namespace Volkolak

#endif // VOLKOLAK_TOOLS_H