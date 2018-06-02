#ifndef TRANSFORM_H
#define TRANSFORM_H

#include "../ops/ops.h"

namespace scrypt {
namespace {

template <class Op>
class Transform {
   public:
    explicit Transform();

   private:
    // Graph-class that binds this transformation
    friend class Graph;
};
}
}
#endif  // TRANSFORM_H
