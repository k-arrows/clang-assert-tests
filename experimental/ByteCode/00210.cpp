// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

struct A {
  constexpr A(int n) : n(n) {}
  int n;
};

struct B : A {
  constexpr B(int n, int m) : A(n), m(m) {}
  int m;
  constexpr int foo() const { return n + m + 1; }
};

static_assert((A(5).*(int (A::*)() const) & B::foo)(), "");
