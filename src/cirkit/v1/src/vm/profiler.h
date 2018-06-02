#ifndef PROFILER_H_
#define PROFILER_H_

namespace cirkit {
namespace {

class Profiler {
   public:
    static void SingletonInit();
    static void Shutdown();
}
}
}
#endif
