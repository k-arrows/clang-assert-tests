// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: setSatisfied
// EXPECT-CRASH-ASSERT: isValueDependent
// EXPECT-CRASH-ASSERT: called

class X {
  virtual ~X();
};
constexpr bool b = requires(X &x) { 0; };

template <auto> struct A {
  static constexpr bool foo();
};

class B {
  void p() {}
  bool q = true;
  friend struct A<0>;
};

template <auto x> constexpr bool A<x>::foo() {
  return requires(B a) {
    a.p();
    b.q;
  };
}

static_assert(!A<42>::foo());
