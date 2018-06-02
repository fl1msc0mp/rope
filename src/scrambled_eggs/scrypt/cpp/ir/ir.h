#ifndef IR_H_
#define IR_H_

#include <string>
#include <vector>

#include "../ops/ops.h"
#include "irnode.h"

namespace scrypt {
namespace {

template <typename T>
class ExprNode : public IRNode<ExprNode<T>> {
   public:
    ExprNode(){};

   private:
};

template <typename T>
class StmtNode : public IRNode<StmtNode<T>> {
   public:
    StmtNode(){};

   private:
};

class Type;

template <typename T>
class Expr;

struct Cast : public ExprNode<Cast> {
    static Expr<Cast> value;
    static Expr<Cast> make(Type t, Expr<Cast> v);
};

struct Load : public ExprNode<Load> {};
struct Ramp : public ExprNode<Ramp> {};

// class Add : public ExprNode<Add> {};

// class Mul : public ExprNode<Mul> {};

// class Rot : public ExprNode<Rot> {};

// class Xor : public ExprNode<Xor> {};
}
}  // namespace scrypt

#endif  // IR_H_
