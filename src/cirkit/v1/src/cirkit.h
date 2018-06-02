#ifndef CIRKIT_H_
#define CIRKIT_H_

#include <cstring>
#include "stdio.h"
#include "stdlib.h"
#include "vm/vm.h"

namespace cirkit {
namespace {

// Forward Declarations
class VM;

class LocalVariable {};
class GlobalVariable {};

class Interpreter;

class CirKit {
   public:
    VM* Init(const char* opts) { return VMInit(opts); };

   private:
};
const char* _version_ = "0.0.1";

static void PrintHelp() { printf("CirKit version %s\n", _version_); };

static void ParseArgs(int& argc, char**& argv) {
    unsigned int i = argc;
    i = 1;
    if (strcmp(argv[0], "--")) {
        return;
    };
}

// CirKit Initialisation procedures
static void RunCirkit(int argc, char** argv) {
    ParseArgs(argc, argv);

    PrintHelp();

    // Initialise CirKitMachine
    VM vm;
};
}
}
#endif
