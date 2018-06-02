#ifndef ADD_H_
#define ADD_H_

#include <vector>

namespace scrypt {
namespace {

template <typename T>
class Op;

template <class Op>
class Add {
   public:
    explicit Add();

    void run();
    // void run(const decltype((Add<Op>) x, const decltype((Add<Op>)));
    // void run(int x, int y);
    Add* modify();

   private:
    const std::vector<Op> _operands;
    const Add* parent;
    Add* child;
};
}
}  // namespace scrypt

#endif
