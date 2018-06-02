#include "state.h"

namespace scrypt {
namespace {

data_block* unpack(data_block& d) { return &d; };
data_block* pack(data_block& d) { return &d; };

data_block create() {
    data_block d;
    return d;
};

template <>
State<data_block>::State(){};

template <>
State<char>::State(){};

template <>
State<int>::State(){};

template <>
State<double>::State(){};
}
}
