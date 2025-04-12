#ifndef VOLKOLAK_TOOLS_H
#define VOLKOLAK_TOOLS_H

#include <filesystem>
#include <map>
#include <string>

namespace Volkolak {

std::string ToScreamingSnakeCase(std::string_view name);
std::string HungarianToSnakeCase(std::string_view name);

void WriteToFile(const std::filesystem::path &output_path, const std::string &value);

} // namespace Volkolak

#endif // VOLKOLAK_TOOLS_H