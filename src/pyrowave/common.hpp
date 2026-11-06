// SPDX-License-Identifier: MIT
#pragma once
#include <algorithm>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
constexpr const char *PYRO_COMMIT = "7fe0e2667cd3076b8b2bf04bcb80bc8d691b800b";
#if defined(__GNUC__) || defined(__clang__)
__attribute__((format(printf, 1, 2)))
#endif
void log_line(const char *fmt, ...);
[[noreturn]] void fail(const char *reason);
