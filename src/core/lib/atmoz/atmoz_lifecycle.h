#ifndef ATMOZ_LIFECYCLE_H_
#define ATMOZ_LIFECYCLE_H_

namespace atmoz {
namespace {

class Node;
class Cluster;

void TryShutdown(Node* node);

void TrySingletShutdown(Node* node);

void TryRestart();

class LifeCycleManager {
   public:
   private:
};
}
}

#endif
