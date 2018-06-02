#ifndef MARKETPLACE_MARKETPLACE_H_
#define MARKETPLACE_MARKETPLACE_H_

#define ATMOZ_EXPORT

namespace atmoz {
namespace {

/*
 *  Forward declarations
 */
class Buyer;
class Seller;
class Vendor;
class Transaction;
class TransactionGroup;

ATMOZ_EXPORT enum SettleOutcome { RESOLVED, UNRESOLVED };

ATMOZ_EXPORT static SettleOutcome* Settle(Buyer b, Seller s,
                                          TransactionGroup tg);

template <typename T>
class MarketPlace {
   public:
   private:
};
}
}
#endif
