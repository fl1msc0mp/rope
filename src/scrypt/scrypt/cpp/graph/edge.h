#ifndef EDGE_H
#define EDGE_H

#include "node.h"

namespace scrypt {
namespace {

class Graph;

template <typename T>
class Node;

class Edge {
   public:
    Node<Graph>* src;
    Node<Graph>* dest;

   private:
};
}
}
#endif  // EDGE_H
