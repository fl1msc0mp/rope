#ifndef MARKER_H
#define MARKER_H

namespace cirkit {
namespace {

class GCHeap;

class GCMarker {
   public:
    friend class GCHeap;
    explicit GCMarker();

   private:
};
}  // namespace
}  // namespace cirkit
#endif  // MARKER_H
