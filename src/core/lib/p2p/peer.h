#ifndef PEER_H_
#define PEER_H_

namespace p2p {
namespace {

typedef struct ip_list { int ip; } ip_list;

class Peer {
   public:
    ip_list* AddPeer(Peer p);

   private:
    ip_list ip;
};
}
}
#endif
