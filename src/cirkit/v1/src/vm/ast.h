#ifndef AST_H
#define AST_H

namespace cirkit {
namespace {

class ASTNodeVisitor {
   public:
   private:
};

struct ASTNode {
    ASTNode* prev;
    ASTNode* next;
};

class Expression;
class Statement;
class Declaration;
class ForStatement;
class WhileStatement;
class DoWhileStatement;
class ExpressionStatement;
class SwitchStatement;
class TryStatement;
}
}  // namespace cirkit
#endif  // AST_H
