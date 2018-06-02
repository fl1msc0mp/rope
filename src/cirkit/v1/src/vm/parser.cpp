#include "parser.h"

namespace cirkit {
namespace {

/*
 *  Singleton parser object
 */
static Parser p;

ParsedHistory* Parser::TrimWhitespace() { return p.History(); };
}
}
