#pragma once

#if defined(_MSC_VER) && !defined(__clang__)
#ifndef __builtin_expect
#define __builtin_expect(expr, val) (expr)
#endif
#ifndef __builtin_unreachable
#define __builtin_unreachable() __assume(0)
#endif
#endif
