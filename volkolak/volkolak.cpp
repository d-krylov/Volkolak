#include "parser.h"

using namespace Volkolak;

int main(int argc, char **argv) {

  if (argc == 1) {
    return 0;
  }

  std::filesystem::path specification_path = argv[1];

  ParseDocument(specification_path);
  GenerateEnumFile();
  GenerateStructuresFile();

  return 0;
}