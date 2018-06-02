#ifndef MEMPOOL_H_
#define MEMPOOL_H_

#define MEM_EXPORT

#include <atomic>
#include <cstdint>

namespace mem {
namespace {

class MEM_EXPORT MemoryPool {
   public:
    virtual ~MemoryPool();

    virtual bool Allocate(int64_t size, uint8_t** out) = 0;

    virtual bool ReAllocate(int64_t old_size, int64_t new_size,
                            uint8_t** ptr) = 0;

    virtual void Free(uint8_t* start, int64_t size) = 0;

    virtual int64_t bytes_allocated() const = 0;

   protected:
    MemoryPool();
};
}
}
#endif
