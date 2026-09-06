// RUN: clang++ -c %s
// EXPECT-FAIL

template <typename T> struct S {
  T foo;
  constexpr S(T const t) : foo(t) {}
  S(S const &tt) : bar(tt.foo) {}
  constexpr S(S &tt) : S(const_cast<S const &>(tt)) {}
};

template <typename T> struct W {
  T val;
};
template <typename T> constexpr W<T> w(T t) { return {t}; }
constexpr W<S<int>> t = w(S<int>{42});
