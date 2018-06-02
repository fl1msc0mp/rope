#ifndef GC_H
#define GC_H

#include "stdint.h"

namespace cirkit {
namespace {

template <typename T>
class GenerationBuilder {
   public:
    GenerationBuilder();
};

class GCStatistics;

class GCInit;

class GCInit {
   public:
   private:
};

// Main GC Object forms the root node of gc_tree
class GC {
   public:
    GC();
    GC(const GC& gc);
    static constexpr GC* instance = nullptr;
    static bool IsEnabled();

   private:
    virtual ~GC();
    friend class Marker;
    friend class Sweeper;
};

}  // namespace
}  // namespace cirkit
#endif  // GC_H
