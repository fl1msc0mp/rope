#ifndef STATE_H_
#define STATE_H_

#include <vector>
#include "transition.h"

namespace scrypt {
namespace {

// Forward Declarations
class Graph;
class Node;
class Edge;

struct data_block {
    size_t sz;
};

template <typename T>
class State {
   public:
    static State* Update(State& s, data_block d) {
        s._data.push_back(d);
        return *s;
    }
    static State<T> Generate() { return State<T>(); };
    State<T>* prev;
    State<T>* next;

   private:
    State();
    virtual ~State();
    explicit State(T data);
    explicit State(T data, T* tref);
    std::vector<data_block> _data;
};
// Inline Functions
inline State<Graph> Validate();
inline State<Node> Input();
inline State<Node> Output();
inline State<Edge> Status();
}
}  // namespace scrypt

#endif
