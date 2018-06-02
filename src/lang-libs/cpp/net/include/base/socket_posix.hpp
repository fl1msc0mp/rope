#ifndef SOCKET_POSIX_HPP
#define SOCKET_POSIX_HPP

#if defined __linux__
#include <sys/socket.h>
#include <sys/types.h>
#endif

namespace net {
namespace {

template <typename T>
class Socket {
   public:
    explicit Socket();

   private:
};

}  // namespace
}  // namespace net
#endif  // SOCKET_POSIX_HPP
