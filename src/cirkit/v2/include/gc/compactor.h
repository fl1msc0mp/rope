#ifndef COMPACTOR_H
#define COMPACTOR_H

#include "heap.h"

namespace cirkit {
namespace {

struct HeapObject;

class GCCompactor {
   public:
    HeapObject* MinCompaction();

   private:
};
}  // namespace
}  // namespace cirkit
#endif  // COMPACTOR_H
