// RUN: clang++ -c %s
// EXPECT-FAIL

template <template <decltype(foo())> typename T> struct S {};
template <int *> struct P;

S<P> s;
