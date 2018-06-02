#ifndef CIRCUIT_H
#define CIRCUIT_H

#include <vector>

namespace cirkit {
namespace {

template <typename T>
class Input {
   public:
    explicit Input();

   private:
    friend class Output;
};

template <typename T>
class Output : Input<T> {
   public:
    explicit Output();

   private:
};

struct CircuitInput {};
struct CircuitOutput {};

class TensorIn;
class TensorOut;

template <class In, class Out>
class Wire {
   public:
    In in;
    Out out;

   private:
};

template <class Op>
class Gate {
   public:
    Gate();
    Gate* RegisterGate(const Gate<Op>& gate) const;

   private:
};

class Circuit {
   public:
    Circuit();

   private:
};

}  // namespace
}  // namespace cirkit
#endif  // CIRCUIT_H
