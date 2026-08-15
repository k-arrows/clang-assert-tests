// RUN: clang++ -c -std=c++26 %s
// EXPECT-PASS

template <typename T> struct S {
  void foo(void *bar) { struct S s, baz = bar(s); }
};
