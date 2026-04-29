// RUN: clang++ -c -std=c++20 -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: setLifeStateRecurse
// EXPECT-CRASH-ASSERT: getLifetime
// EXPECT-CRASH-ASSERT: Started

class C {
  bool B[2][2];
  constexpr C(int &I) : I(I) {}
  constexpr ~C() {}
};

void foo(int i) { C c(i); }
