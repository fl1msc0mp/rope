#include "atmoz_service.h"
namespace atmoz {
namespace {

static Service* service = nullptr;

Service* Service::CreateService() { return service; };
}
}
