// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

void foo() { const char (*bar)[12] = new int[3][&bar + 12 - &bar]; }
