#include "tools.h"
#include <algorithm>
#include <fstream>
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

std::string_view RemovePrefix(std::string_view name) {
  std::vector<std::string> prefixes{"pp", "p"};
  auto prefix_check = [&](const auto &prefix) { return name.starts_with(prefix) && std::isupper(name[prefix.size()]); };
  auto prefix_name = std::ranges::find_if(prefixes, prefix_check);
  name.remove_prefix(prefix_name != prefixes.end() ? prefix_name->size() : 0);
  return name;
}

std::string HungarianToSnakeCase(std::string_view name) {
  std::string result;
  auto name_without_prefix = RemovePrefix(name);
  auto previous_is_lower = false;
  for (auto Char : name_without_prefix) {
    if (std::isupper(Char) && previous_is_lower) {
      result.push_back('_');
    }
    result.push_back(std::tolower(Char));
    previous_is_lower = std::islower(Char);
  }
  return result;
}

void WriteToFile(const std::filesystem::path &output_path, const std::string &value) {
  std::ofstream output(output_path);
  output << value;
  output.close();
}

} // namespace Volkolak