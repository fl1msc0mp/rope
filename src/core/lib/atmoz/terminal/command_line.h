#ifndef COMMAND_LINE_H_
#define COMMAND_LINE_H_

namespace atmoz {
namespace {

// Main Command Line Interface
class CommandLine {
 public:
  // Run atmoz with cli argument-defined parameters
  bool Start(int argc, char **argv);

 private:
  bool ParseArgs(int argc, char **argv);
};
}
}
#endif