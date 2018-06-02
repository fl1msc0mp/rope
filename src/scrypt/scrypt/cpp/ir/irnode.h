#ifndef IRNODE_H
#define IRNODE_H

#include <string>
#include "expr.h"
#include "stmt.h"

namespace scrypt {
namespace {

// Forward Declarations
class IR;

template <typename T>
class IRNode : public Stmt<IRNode<T>> {
   public:
    IRNode();
    IRNode* GetParent(const IR& ir) const;

   private:
};

struct Store : public IRNode<Store> {
    std::string name;
    Store create();
};

struct Provide : public IRNode<Provide> {};
struct Allocate : public IRNode<Allocate> {};
struct ProducerConsumer : public IRNode<ProducerConsumer> {};
struct Free : public IRNode<Free> {};
struct Range : public IRNode<Range> {};

template <>
const IRNode* IRNode<IR>::GetParent(const IR& ir) const {};

}  // namespace
}  // namespace scrypt
#endif  // IRNODE_H
