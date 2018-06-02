#ifndef PARSER_H_
#define PARSER_H_

namespace cirkit {
namespace {

struct ParsedHistory {
    bool success;
};

class Parser {
   public:
    ParsedHistory* TrimWhitespace();
    ParsedHistory* History() { return _history; }

   private:
    ParsedHistory* _history;
};
}
}
#endif
