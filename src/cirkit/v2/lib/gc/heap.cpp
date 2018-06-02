#include "gc/heap.h"
#include <vector>

namespace cirkit {
namespace {

std::vector<const HeapObject*> object_queue;

HeapObject NewHeapObject(GCHeap& heap){};
void RemoveHeapObject(HeapObject& object, GCHeap& heap){};
void RemoveMultipleHeapObjects(){};

}  // namespace
}  // namespace cirkit
