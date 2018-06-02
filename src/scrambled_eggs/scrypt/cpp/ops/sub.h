#ifndef SUB_H
#define SUB_H

namespace scrypt {
namespace {

template <typename T>
class Op;

template <typename T>
class Sub : public Op<Sub<T>> {
   public:
    explicit Sub();

   private:
};
}
}

#endif  // SUB_H
