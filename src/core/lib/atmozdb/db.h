#ifndef DB_H_
#define DB_H_

#include <stdlib.h>

#define DB_EXPORT

namespace atmozdb {
namespace {

class Db {
   public:
    ~Db();

    override static void DoOp();

   private:
    size_t _bytes;
};
}
}
#endif
