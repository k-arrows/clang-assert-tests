// RUN: clang++ -c -x c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

#define FOO(num, expr) enum { test##num = (expr) };

struct S s;
FOO(50, &s < (struct S *)((int *)&s + 42))
