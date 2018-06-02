#ifndef CIRCULAR_BUFFER_HPP
#define CIRCULAR_BUFFER_HPP

#include <stddef.h>

namespace atmoz {
namespace container {
namespace {

// Fixed Size Circular Buffer
template <typename T, size_t Size>
class CircularBuffer {
   public:
    CircularBuffer();

    CircularBuffer<T, Size>* Head;
    CircularBuffer<T, Size>* Tail;

    bool IsEmpty();

   private:
};

}  // namespace
}  // namespace container
}  // namespace atmoz
#endif  // CIRCULAR_BUFFER_HPP
