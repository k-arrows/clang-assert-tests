// RUN: clang++ -c -std=c++26 %s
// EXPECT-FAIL

int foo() { int bar() post(r : r > 42); }
