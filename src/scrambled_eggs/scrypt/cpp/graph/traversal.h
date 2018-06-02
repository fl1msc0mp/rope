#ifndef TRAVERSAL_H
#define TRAVERSAL_H

#include "graph.h"

namespace scrypt {
namespace {
// Forward Declarations
class Graph;
class Edge;
template <typename T>
class Node;

// Forward Traversal Class
template <typename T>
class FTraverser {
   public:
    explicit FTraverser();
    Graph* operator*();
    const Node<Graph>* prev;

   private:
    Graph* graph;
};

// Backward Traversal Class
template <typename T>
class BTraverser {
   public:
    explicit BTraverser();

   private:
    Graph* graph;
};
}
}  // namespace scrypt
#endif  // TRAVERSAL_H
