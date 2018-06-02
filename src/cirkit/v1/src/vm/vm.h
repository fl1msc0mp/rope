#ifndef VM_H
#define VM_H

namespace cirkit {
namespace {

struct Register {};

class VM {
   public:
    static const char* Init();
    static constexpr VM* instance = nullptr;

   private:
};

VM* VMInit(const char* opts);
}
}
#endif  // VM_H
