#ifndef MUL_H_
#define MUL_H_

namespace scrypt {
namespace {

template <typename T>
class Op;

template <typename T>
class Mul : public Op<Mul<T>> {
   public:
    explicit Mul();

   private:
};
}
}  // namespace scrypt

#endif  // MUL_H_
