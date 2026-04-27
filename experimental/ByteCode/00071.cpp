// RUN: clang++ -c -x c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

void foo() { int bar = &*(void *)0 - &&baz; }
