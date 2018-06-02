#ifndef ROUND_H
#define ROUND_H

namespace scrypt {
namespace {

template <class Round>
struct RoundIterator {
   private:
    Round& round;

   public:
    typedef void value_t;
    typedef void diff_t;
    typedef void pointer;
    typedef void reference;
};

template <typename T>
class RoundSequence {
   public:
    explicit RoundSequence& rs;

   private:
};

template <typename T>
class Round;

}  // namespace
}  // namespace scrypt
#endif  // ROUND_H
