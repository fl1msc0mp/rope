#ifndef BALANCE_HPP
#define BALANCE_HPP

namespace ledger {
namespace {

class Balance {
   public:
    Balance();

    Balance(double &balance);

    bool operator==(const Balance &) const;
    bool operator!=(const Balance &) const;
    bool operator<=(const Balance &) const;
    bool operator>=(const Balance &) const;
    bool operator<(const Balance &) const;
    bool operator>(const Balance &) const;

    Balance CalculateCurrent();
    Balance CalculatePotential();

   private:
};
}  // namespace
}  // namespace ledger
#endif  // BALANCE_HPP
