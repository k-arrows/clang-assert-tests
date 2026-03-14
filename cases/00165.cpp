// RUN: clang++ -c -std=c++23 %s
// EXPECT-FAIL

void foo()([] consteval -> int {}())
