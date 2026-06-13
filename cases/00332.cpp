// RUN: clang++ -c %s
// EXPECT-FAIL

template <typename T> constexpr int foo(T);

const int i = foo(42);

template <typename T> constexpr int foo(T) { return bar; }
