// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

struct S {};

void foo() { dynamic_cast<>(*((S *)"")); }
