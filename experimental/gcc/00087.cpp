// RUN: clang++ -c %s
// EXPECT-FAIL

template <foo> struct S {
  template <int = 0> static int bar() { return 0; }
  static int baz = bar();
};
