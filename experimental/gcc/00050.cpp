// RUN: clang++ -c %s
// EXPECT-FAIL

template <bool B, class T, class F> struct S {};

int VAL = 1;

template <int B> void foo(typename S<B == VAL, int, float>){};
