#ifndef TRIE_H_
#define TRIE_H_

namespace mem {
namespace {

template <class... NodeType>
class Trie {
   public:
    void find();    // TODO
    void insert();  // TODO

   private:
};

template <class NodeType>
class Trie<NodeType> {
   public:
    Trie();

   private:
};

}  // namespace
}  // namespace mem

#endif
