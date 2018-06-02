#ifndef MUTEX_H
#define MUTEX_H

#include <mutex>

namespace cirkit {
namespace runtime {

class VMMutex : public std::mutex {
   public:
    VMMutex(int rank, const char* name);

   private:
};
}
}

#endif  // MUTEX_H
