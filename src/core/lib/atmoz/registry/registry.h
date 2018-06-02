#ifndef ATMOZ_REGISTRY_H_
#define ATMOZ_REGISTRY_H_

#include <stdint.h>

namespace atmoz {
namespace {

/*
 *  Forward Declarations
 */
class Node;
class Unit;
class Group;

struct RegistryEntry {
    int Key;
    int Index;
};

enum RegistryType { PUBLIC, PRIVATE, INTERNAL };

class Metadata {
   public:
   private:
};

class Registry {
   public:
    Registry();
    ~Registry();
    RegistryType type;
    void AddNode(Registry* registry);
    void RemoveNode(Registry* registry);

   private:
    uint64_t HashRange;
};
}
}

#endif
