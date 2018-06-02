#ifndef SAT_H
#define SAT_H

namespace cirkit {
namespace {

template <class Sat>
struct SatResult {
    static constexpr bool result = false;
};

class Sat {
   public:
    explicit Sat() {}

   private:
};
}  // namespace
}  // namespace cirkit
#endif  // SAT_H
