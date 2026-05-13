// RUN: clang++ -c -std=c++20 -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: VisitCallExpr
// EXPECT-CRASH-ASSERT: hasRVO

struct A {
  virtual constexpr char f() const { return 'A'; }
};
struct NA : A {};

struct B : NA {
  virtual constexpr char f() const { return 'B'; }
};
struct NB : B {};

struct C : A {
  NB constexpr char f() const { return 'C'; }
  char c = ((A *)this)->f();
  constexpr C(A *pba) {}
};

struct D : NB, C {
  constexpr D() : C((B *)this) {}
};

constexpr int n = (D(), 0);
