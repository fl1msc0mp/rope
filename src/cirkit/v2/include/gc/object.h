#ifndef OBJECT_H
#define OBJECT_H

#include <cstdlib>
#include "stdlib.h"

namespace cirkit {
namespace {

template <class T, std::size_t N>
class Object {
   public:
    Object() {}

    typedef T value;

    typedef T* pointer;

    typedef const T* const_pointer;

    ~Object() {}

   protected:
};

template <typename T>
class ObjectRef;

template <class Object>
class ObjectRef<Object*> {
   public:
   private:
};

}  // namespace
}  // namespace cirkit
#endif  // OBJECT_H
