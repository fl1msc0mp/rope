#ifndef TRANSACTION_HPP
#define TRANSACTION_HPP

namespace ledger {
namespace {

enum class TransactionStates { PENDING, CONFIRMED, UNCONFIRMED, REJECTED };

class Transaction {
   public:
    Transaction();

   private:
};

}  // namespace
}  // namespace ledger
#endif  // TRANSACTION_HPP
