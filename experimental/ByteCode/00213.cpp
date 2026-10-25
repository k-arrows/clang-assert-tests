// RUN: clang++ -c -std=c++20 -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: visitAPValue
// EXPECT-CRASH-ASSERT: findVirtualBase

struct S;
struct A {
  constexpr char foo() const { return 'A'; }
  constexpr ~A() {}
};
struct S : A {};
struct B : S {};
struct N : B {};
struct C : A {
  A *a;
  constexpr C(A *a) : a(a) {}
};
struct D : N, C {
  constexpr D() : C((B *)this) {}
};

constexpr D d;
