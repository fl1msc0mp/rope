#ifndef RING_BUFFER_HPP
#define RING_BUFFER_HPP
#include <stddef.h>
namespace atmoz {
namespace container {
namespace {

template <class RingBuffer>
struct RingBufferForwardIterator;

template <typename T, size_t Size>
class RingBuffer {
   public:
    typedef RingBuffer<T, Size> pointer;
    typedef T value;

   private:
};
}  // namespace
}  // namespace container
}  // namespace atmoz
#endif  // RING_BUFFER_HPP
