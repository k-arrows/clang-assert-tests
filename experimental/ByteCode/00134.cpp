// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

struct A {
  virtual void foo();
};

struct B : A {
  constexpr void bar() { foo(); }
  static void foo();
};
