// RUN: clang++ -c %s
// EXPECT-FAIL

template <template <decltype(foo())> typename> struct S {};
template <int &p> struct P;
S<P> s;
