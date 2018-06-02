#ifndef HEAP_WALKER_H
#define HEAP_WALKER_H

#include <vector>
#include "heap.h"

namespace cirkit {
namespace {

class GCHeap;

class GCHeapWalker {
   public:
    GCHeapWalker(GCHeap* h) : _heap(h){};
    void WalkHeap();

   private:
    GCHeap* _heap;  // ptr to curr heap
    std::vector<GCHeap> _heap_list;
};
}  // namespace
}  // namespace cirkit
#endif  // HEAP_WALKER_H
