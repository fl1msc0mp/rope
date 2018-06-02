#include "gc/compactor.h"

namespace cirkit {
namespace {

HeapObject h;

HeapObject* GCCompactor::MinCompaction() {
    HeapObject hc;  // HeapObject copy
    hc = h;
    return &h;
};
}  // namespace
}  // namespace cirkit
