#ifndef SOLVER_H_
#define SOLVER_H_

#include "../ir/expr.h"

namespace scrypt {
namespace {

// Forward Declarations
class Op;

struct SolverResult {
    static Expr<Op> Result;
};

class Solver {
   public:
    Solver();
    SolverResult Solve();

   private:
    virtual ~Solver();
};
}
}  // namespace scrypt
#endif
