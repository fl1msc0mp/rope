#include "mempool.h"

namespace mem {
namespace {

bool MemoryPool::Allocate(int64_t size, uint8_t** out){};

bool MemoryPool::ReAllocate(int64_t old_size, int64_t new_size,
                            uint8_t** ptr){};
}
}
