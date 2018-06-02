#ifndef RIJNDAEL_H_
#define RIJNDAEL_H_

namespace crypto {
namespace {

void AddRoundKey();

void SubBytes();

void MixColumns();

void KeyExpansion();
}
}
#endif
