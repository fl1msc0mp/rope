#include "gc/gc.h"

// Initialisation routines for gc library

namespace cirkit {
namespace {

struct GCOptions {
    int heap_size;
};

GC::GC() { GCOptions* opts; };

bool GC::IsEnabled() { return true; };

}  // namespace
}  // namespace cirkit
