#include <cstring>
#include <iostream>

#define COLOUR "\033[38;5;852m"
#define RESET "\x1B[0m"
enum class Status { SC_RUNNING, SC_ERROR };

static void PrintVersion() {
    std::string version;
    std::cout << version << std::endl;
};
static void PrintHelp() {
    std::cout
        << COLOUR
        << "Usage: SCrypt [-c] [Filename here ...] Defaults to llvm ir output"
        << RESET << std::endl;
}

static void ParseArgs(int argc, char** argv) {
    Status s = Status::SC_RUNNING;
    for (int i = 1; i <= argc; ++i) {
        if (argc > 1) {
            int idx = argc--;
            const char* arg = argv[idx];
            if (strcmp(arg, "-v") == 0) {
                return;
            } else if (strcmp(arg, "-c") == 0) {
                return;
            }
        }
    }
    PrintHelp();
}

int main(int argc, char** argv) {
    ParseArgs(argc, argv);
    // std::cout << PINK << "SCrypt v0.1" << RESET << std::endl;
}
