// RUN: clang++ -c %s
// EXPECT-FAIL

template <typename T> struct S {};
template <typename T, typename U> struct P {};
template <typename... T> int foo(P<S<T...>, T>...);

int bar = foo(P<S<int>, char>());
