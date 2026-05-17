// RUN: clang++ -c %s
// EXPECT-FAIL

template <> template <typename T> using Foo = T;
