#ifndef ENVIRONMENT_H_
#define ENVIRONMENT_H_

#include <memory>

namespace atmoz {
namespace {

enum EnvironmentType { BARE_METAL, WIN, POSIX };

class Environment {
   public:
    virtual ~Environment(){};
    static Environment* Create();

   private:
    EnvironmentType* environmentType;
};
}
}

#endif
