#ifndef ATMOZ_SIGNAL_H_
#define ATMOZ_SIGNAL_H_

#include <vector>
#include "atmoz_context.h"

namespace atmoz {
namespace {

enum SignalType {};

class Signal {
   public:
    Signal();

    Context<Signal> ctx;

   private:
};
}
}

#endif
