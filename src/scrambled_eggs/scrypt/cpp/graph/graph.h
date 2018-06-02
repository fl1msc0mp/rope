#ifndef GRAPH_H_
#define GRAPH_H_

#include <vector>
#include "node.h"

// Internal Graph representation of a cryptographic protocol.

namespace scrypt {
namespace {

template <typename T>
class Node;

class Graph {
   public:
    Graph();

    int graph_id;

   private:
    ~Graph();
    Node<Graph>* RootNode;
    std::vector<Node<Graph>> Vertices;
};
}
}  // namespace scrypt
#endif
