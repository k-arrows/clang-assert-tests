// RUN: clang++ -c -std=c++20 -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

struct A {
  constexpr A(int) {}
};

struct B : A {
  A a;
  int i;
};

constexpr B b(42, 43);
