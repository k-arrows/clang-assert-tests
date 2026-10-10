// RUN: clang++ -c -fms-compatibility %s
// EXPECT-FAIL

void foo(int bar[__unaligned]) {}
