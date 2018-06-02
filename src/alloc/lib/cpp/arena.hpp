#ifndef ARENA_HPP
#define ARENA_HPP

#include "allocator.hpp"

namespace alloc {
namespace {

// Forward declarations
class LocalArena;
class GlobalArena;

// Arena allocation is useful for CPU-intensive
// processing. We allocate memory into an 'arena'
// based on session instances which are pre-allocated
// according to use case and then de-allocated at session
// close.
template <class Chunk, class Object>
class Arena : public Allocator {
   public:
    Chunk *first;
    Chunk *last;

   private:
    size_t _mem;
};

}  // namespace
}  // namespace alloc
#endif  // ARENA_HPP
