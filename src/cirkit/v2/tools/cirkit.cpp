#include "execution/interpreter.h"

int main(int argc, char** argv) {
    cirkit::Interpreter i;
    i.Init(argc, argv);
    return 0;
}
