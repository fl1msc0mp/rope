#ifndef CLUSTER_H_
#define CLUSTER_H_

namespace cluster {
namespace {

#ifdef ATMOZ_SINGLE_CLUSTER
class Cluster {
   public:
    virtual ~Cluster();

   private:
};
#endif

#ifdef ATMOZ_MULTI_CLUSTER
class MultiCluster {
   public:
   private:
};
#endif
}
}
#endif
