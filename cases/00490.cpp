// RUN: clang++ -c %s
// EXPECT-CRASH-NOASSERT

template <typename foo, template <typename T, const T &> class C> struct S {
  static foo bar;
  template <template <typename T, T &> class C2> using baz = C2<foo, bar>;
  using C2 = baz<C>;
};
