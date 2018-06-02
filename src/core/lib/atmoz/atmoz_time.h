#ifndef ATMOZ_TIME_H_
#define ATMOZ_TIME_H_

#include <stdint.h>
#include <time.h>

#if defined __linux__
#include "unistd.h"
#endif

namespace atmoz {
namespace {

typedef struct time {
} time;

time* Timestamp();

char* PrintTimestamp(time* t);
char* PrintCurrentTimestamp();

class Timer {
   public:
   private:
};
}
}

#endif
