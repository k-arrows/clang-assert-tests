// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

void foo() { *(void (*)()) ""; }
