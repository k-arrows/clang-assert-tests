// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

void foo() { *((int *)0) = (long)foo % 42; }
