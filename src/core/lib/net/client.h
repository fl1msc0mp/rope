#ifndef CLIENT_H_
#define CLIENT_H_

namespace net {
namespace {

class Client {
   public:
    Client(const char* p) { _protocol = p; };
    static void override WriteBytes();
    static void override ReadBytes();

   private:
    const char* _protocol;
};
}
}
#endif
