// RUN: clang++ -c %s
// EXPECT-FAIL

int foo() { return t<auto (&)(const this)->auto &>; }
