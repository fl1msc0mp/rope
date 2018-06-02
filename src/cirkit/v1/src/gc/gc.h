#ifndef GC_H
#define GC_H

namespace cirkit {
namespace {

// Garbage Collector
class GC {
   public:
    explicit GC();
    static constexpr GC *instance = nullptr;

   private:
};
}
}
#endif  // GC_H
