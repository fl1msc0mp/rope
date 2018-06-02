#ifndef PEER_HPP
#define PEER_HPP

#include "transport.hpp"

namespace p2p {
namespace {

class LeafPeer {
   public:
    explicit LeafPeer();

   private:
};

template <typename T>
class Peer {
   public:
    Peer();

   private:
};
}  // namespace
}  // namespace p2p
#endif  // PEER_HPP
