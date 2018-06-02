#ifndef MERKLE_TREE_H_
#define MERKLE_TREE_H_

namespace atmoz {
namespace {

struct MerkleNode {
    MerkleNode* left;
    MerkleNode* right;
};

MerkleNode* Create();
MerkleNode* Find();
}
}

#endif
