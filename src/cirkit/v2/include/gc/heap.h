#ifndef CIRKIT_GC_HEAP_H
#define CIRKIT_GC_HEAP_H

#include <cstddef>

#define DEBUG
#define RELEASE

namespace cirkit {
namespace {
class GCHeapInfo;

struct HeapObject {};
struct HeapSegement {};

class GCHeapAllocator {
   public:
   private:
};

class GCHeap {
   public:
    friend class GCHeapInfo;
    size_t heap_size;
    bool WriteBarrier() const;
    bool ReadBarrier() const;

   private:
};
}  // namespace
}  // namespace cirkit
#endif  // CIRKIT_GC_HEAP_H
