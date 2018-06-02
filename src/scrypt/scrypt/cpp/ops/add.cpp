#include "add.h"

namespace scrypt {
namespace {

template <>
Add<int>::Add(){};

template <>
void Add<Op<int>>::run(){};

template <>
void Add<Op<double>>::run(){};

template <>
void Add<Op<short>>::run(){};
}
}  // namespace scrypt
