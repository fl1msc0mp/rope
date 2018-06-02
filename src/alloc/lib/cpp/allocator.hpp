#ifndef ALLOCATOR_HPP
#define ALLOCATOR_HPP

#include <new>

namespace alloc {
namespace {

// Forward declarations
class Chunk;
class Object;
class Heap;
class Stack;

// Generic Allocator class type - can be extended to
// allow for different allocation strategies
class Allocator {
   public:
    Allocator();
    void* operator new(size_t obj);
    void operator delete(void* p);

   protected:
    size_t _mem;
};
}  // namespace
}  // namespace alloc

#endif  // ALLOCATOR_HPP
