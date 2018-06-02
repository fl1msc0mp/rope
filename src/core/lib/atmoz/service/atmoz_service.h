#ifndef ATMOZ_SERVICE_H_
#define ATMOZ_SERVICE_H_
namespace atmoz {
namespace {

class Service {
   public:
    virtual Service* CreateService();

   private:
};
}
}
#endif
