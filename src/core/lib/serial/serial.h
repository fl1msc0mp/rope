#ifndef SERIAL_SERIAL_H_
#define SERIAL_SERIAL_H_

#include <stdlib.h>

#include "binary.h"
#include "json.h"
#include "xml.h"
#include "yaml.h"

namespace serial {

typedef struct data_type {
} data_type;

static void Serialize(data_type type, size_t data);

static void Deserialize(data_type, size_t data);
}
#endif
