#ifndef OBJECT_HPP
#define OBJECT_HPP

namespace alloc {
namespace {

template <typename T>
class Object {
   public:
    Object();

   private:
};

class StackObject;
class HeapObject;
class RefCountedObject : public Object<int> {};
}  // namespace
}  // namespace alloc
#endif  // OBJECT_HPP
