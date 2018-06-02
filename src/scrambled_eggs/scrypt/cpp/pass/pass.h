#ifndef PASS_H_
#define PASS_H_

namespace scrypt {
namespace {

template <typename T>
class Pass {
   public:
    explicit Pass();

   private:
};

template <typename T>
class Func : public Pass<Func<T>> {
   public:
   private:
};

Pass<int>& create();
}
}  // namespace scrypt

#endif  // PASS_H_
