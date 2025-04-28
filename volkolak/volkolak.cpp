#include "parser.h"
#include <print>

using namespace Volkolak;

int main(int argc, char **argv) {

  if (argc == 1) {
    std::println("Use ./volkolak /path/to/vk.xml");
    return 0;
  }

  std::filesystem::path specification_path = argv[1];

  Parser parser(specification_path);

  // parser.GenerateStructureFile();
  parser.GenerateEnumFile();
  //  parser.GenerateMaskFile();
  // parser.GenerateFormatFile();

  return 0;
}