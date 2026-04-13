// RUN: clang++ -c %s
// EXPECT-CRASH-NOASSERT

#define C(x) __attribute__((cleanup(x)))
void foo(double *x U) {}

void bar() { C(foo) C(foo) baz8; }
