#ifndef CLUSTER_SCHEDULER_H_
#define CLUSTER_SCHEDULER_H_

namespace cluster {
namespace {

/*
 *  Forward Declarations
 */
class Task;

/*
 *  Generic Cluster Task Scheduler
 */
class Scheduler {
   public:
    virtual Task* Run();

   private:
};
}
}
#endif
