#include "atmoz.h"
#include <iostream>
#include "terminal/command_line.h"

namespace atmoz {
namespace {

void Daemon::Start() const {};

}  // namespace atmoz

int main(int argc, char **argv) {
    atmoz::CommandLine cli;
    atmoz::Daemon d;
    d.Start();
    // cli.Start(argc, argv);
    return 0;
}
