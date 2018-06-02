#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include "balance.h"

namespace ledger {
namespace {

struct SettlementResult;

template <class Account>
class AccountSettlement {
   public:
    AccountSettlement();

   private:
};

template <typename T>
class Account {
   public:
    explicit Account();

   private:
};
}
}  // namespace ledger
#endif  // ACCOUNT_HPP
