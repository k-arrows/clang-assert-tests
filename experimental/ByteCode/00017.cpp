// RUN: clang++ -c -x c -std=c23 -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

void foo() { 9999999999999999999wb / 1wbi; }
