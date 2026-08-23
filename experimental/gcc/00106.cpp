// RUN: clang++ -c -Wall %s
// EXPECT-FAIL

template <typename T> struct S {
  static_assert(!foo<int()>);
};
