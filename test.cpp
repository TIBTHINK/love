#include "argparse.h"

#include <iostream>
#include <iterator>

using namespace argparse;

int main(int argc, const char* argv[]) {
  ArgumentParser parser("Argument parser example");
  parser.add_argument()
      .names({"-v", "--verbose"})
      .description("verbose level")
      .required(true);
  parser.enable_help();
  auto err = parser.parse(argc, argv);
  if (err) {
    std::cout << err << std::endl;
    return -1;
  }

  if (parser.exists("help")) {
    parser.print_help();
    return 0;
  }

  if (parser.exists("v")) {
    switch (parser.get<unsigned int>("v")) {
      case 2:
        std::cout << "an even more verbose string" << std::endl;
        // fall through
      case 1:
        std::cout << "a verbose string" << std::endl;
        // fall through
      default:
        std::cout << "some verbosity" << std::endl;
    }
  }
}