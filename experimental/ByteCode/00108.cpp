// RUN: clang++ -c -x c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

struct S s;
int foo[2 * ((long)&s + 42i) == 2];
