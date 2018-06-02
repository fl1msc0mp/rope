#ifndef CONTAINER_CONTAINER_H_
#define CONTAINER_CONTAINER_H_

#define CONTAINER_EXPORT

#include <string>

#if defined __linux__
#include "libcgroup.h"
#endif

namespace container {
namespace {

struct ContainerLock;

class Container {
   public:
    Container();
    ~Container();

    std::string error_string;

    bool IsRunning(Container* container);
    bool IsStopped(Container* container);
    bool IsPaused(Container* container);
    bool Pause(Container* container);
    bool UnPause(Container* container);

    Container Clone(Container* container);

   private:
    char* name;
    char* config_file;
    char* pid_file;
    ContainerLock* semaphore_lock;
    ContainerLock* private_lock;
    int num_threads;
};
}
}

#endif  // CONTAINER_CONTAINER_H_
