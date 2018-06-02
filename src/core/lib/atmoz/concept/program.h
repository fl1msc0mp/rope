#pragma once

namespace concept {
namespace {

typedef struct program { const char* file_path; } program;

program* load(const char* fp);
}
}
