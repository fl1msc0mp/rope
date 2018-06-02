#ifndef CRYPTO_H_
#define CRYPTO_H_

#include "aes.h"
#include "curve25519.h"
#include "rijndael.h"

namespace crypto {
namespace {

// Rotation operation
template <typename T>
T Rotate(T& word) {
    return word;
};
}
}

#endif
