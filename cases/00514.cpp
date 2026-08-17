// RUN: clang++ -c -std=c++23 -fms-compatibility %s
// EXPECT-CRASH-NOASSERT

auto L = []() static { return 0; };
int (*__attribute__((vectorcall)) foo)() = L;
