#ifndef FS_H_
#define FS_H_

#if defined __linux__
#define FUSE_USE_VERSION 25
#include "fuse.h"
#endif

namespace azfs {
namespace {

struct File;
struct FileDescriptor;
class Fs {
   public:
   private:
};
}
}

#endif
