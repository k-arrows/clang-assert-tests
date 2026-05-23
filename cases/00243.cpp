// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: getNestingDepth
// EXPECT-CRASH-ASSERT: ParmDepth
// EXPECT-CRASH-ASSERT: ParmVarDecl

struct S {
  int x[2];
};
template <class F> int a(F f, S s) { return f(s.x[0], s.x[1]); }

int bar(auto x, auto y) {
  return a(
      [&](auto... xs) {
        return (a(([]<decltype(xs) xx = 1>(auto... ys) {
      return (ys + ...); }, y) + ...);
      },
      x);
}

void foo() {
  bar(S({1, 2}, S({3, 4});
}
