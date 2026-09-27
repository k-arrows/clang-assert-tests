// RUN: clang++ -c %s
// EXPECT-FAIL

struct S {};

template <class K, class V> struct D {};

template <class K, class V> struct F : D<K, V> {
  using typename S::foo;
  void bar() {}
};
