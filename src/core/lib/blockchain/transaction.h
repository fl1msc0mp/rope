#ifndef BLOCKCHAIN_TRANSACTION_H_
#define BLOCKCHAIN_TRANSACTION_H_

#define BLOCKCHAIN_EXPORT

namespace atmoz {
namespace {

typedef struct transaction {
    int value;
    int input;
    int output;
} transaction;

typedef struct tx_verify_result {
} tx_verify_result;

BLOCKCHAIN_EXPORT static bool Verify();
}
}
#endif
