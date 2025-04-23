#include "tools.h"
#include <fstream>
#include <ranges>
#include <vector>

namespace Volkolak {

std::string ToScreamingSnakeCase(std::string_view name) {
  std::string converted_name;
  auto previous_is_lower = false;
  auto previous_is_digit = false;
  for (auto Char : name) {
    if ((std::isupper(Char) && (previous_is_lower || previous_is_digit)) || (std::isdigit(Char) && previous_is_lower)) {
      converted_name.push_back('_');
    }
    converted_name.push_back(std::toupper(Char));
    previous_is_lower = std::islower(Char);
    previous_is_digit = std::isdigit(Char);
  }
  return converted_name;
}

std::size_t GetPrefixSize(std::string_view name) {
  auto result = 0;
  auto previous_is_lower = false;
  auto previous_is_digit = false;
  for (auto Char : name) {
    result += std::isupper(Char) && (previous_is_lower || previous_is_digit);
    result += std::isdigit(Char) && (previous_is_lower);
    result += 1;
    previous_is_lower = std::islower(Char);
    previous_is_digit = std::isdigit(Char);
  }
  return result;
}

std::string HungarianToSnakeCase(std::string_view name) {
  std::string result;
  auto previous_is_lower = false;
  for (auto symbol : name) {
    if (std::isupper(symbol) && previous_is_lower) result.push_back('_');
    result.push_back(std::tolower(symbol));
    previous_is_lower = std::islower(symbol);
  }
  return result;
}

std::string GetRandomTypeAsArray(std::string_view text, std::string_view base_type) {
  constexpr auto array_template = "std::array<{}, {}>";
  auto position = 0;
  auto result = std::string(base_type);
  auto dimensions = std::vector<std::string_view>();
  while ((position = text.find('[', position)) != std::string::npos) {
    if (auto end = text.find(']', position); end != std::string::npos) {
      dimensions.emplace_back(text.substr(position + 1, end - position - 1));
      position = end + 1;
    } else {
      break;
    }
  }

  for (const auto &dimension : std::views::reverse(dimensions)) {
    result = std::format(array_template, result, dimension);
  }

  return result;
}

void WriteToFile(const std::filesystem::path &output_path, const std::string &value) {
  std::ofstream output(output_path);
  output << value;
  output.close();
}

std::string String::Get() const {
  std::string result;
  result.reserve(prefix.size() + center.size() + suffix.size());
  result.append(prefix);
  result.append(center == FLAG_SUFFIX ? MASK_SUFFIX : center);
  result.append(suffix);
  return result;
}

std::string String::GetPrefix() const {
  std::string data;
  data.reserve(prefix.size() + suffix.size());
  data.append(prefix);
  data.append(suffix);
  return data;
}

std::string String::GetName() const {
  auto name = Get();
  return name.substr(VULKAN_PREFIX_SIZE);
}

} // namespace Volkolak