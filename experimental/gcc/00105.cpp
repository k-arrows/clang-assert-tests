// RUN: clang++ -c -std=c++26 %s
// EXPECT-FAIL

struct S {
  constexpr S() {}
  constexpr S(const S &x) {}
  int *s;
};

struct T : S {
  constexpr T(int x) {}
};

template <typename X> constexpr int foo(X x) { throw x; };

static_assert(foo(T(42)));
