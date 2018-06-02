#ifndef NODE_H
#define NODE_H

#include <string>
#include "../ops/ops.h"

namespace scrypt {
namespace {

class Graph;
class Edge;

struct NodeDef {
    NodeDef* curr;
    std::string& name;
};

template <typename T>
class Node {
   public:
    int id() const { return _id; }
    bool IsTransformation(Node n) const;

    static void Clear(Node* n);

    Node* AddNode();

    Node* RemoveNode(Node& n);

    Edge* LeftEdge;

    Edge* RightEdge;

   private:
    friend class Graph;
    Node();
    // Node<T>* operator=();
    int _id;
    bool _has_state;
};

inline Node<Graph> GetNode();

inline Node<Graph> Transform();
}
}  // namespace scrypt
#endif  // NODE_H
