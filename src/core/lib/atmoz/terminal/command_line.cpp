#include "command_line.h"
#include <stdlib.h>
#include <cstring>

namespace atmoz {
namespace {

// CommandLine::CommandLine(){};

bool CommandLine::Start(int argc, char** argv) { return true; };

bool CommandLine::ParseArgs(int argc, char** argv) {
  unsigned int i = 1;
  while (i < static_cast<unsigned int>(argc) && argv[i][0] == '-') {
    const char* arg = argv[i];
    if ((strcmp(arg, "--debug")) == 0) {
      return true;
    } else if (strcmp(arg, "--version") == 0) {
      return true;
    } else if (strcmp(arg, "--num_threads") == 0) {
      static int num_threads = atoi(argv[++i]);
      return true;
    }
    return false;
  }
}
}
}