// RUN: clang++ -c -std=c++20 %s
// EXPECT-FAIL

template <typename T> struct foo {};
template <typename T>
concept bar = foo<T>::baz;

static_assert(requires { requires bar<int>; });
