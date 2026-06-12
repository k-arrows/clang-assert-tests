// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: CallVirt
// EXPECT-CRASH-ASSERT: hasThisPointer

struct A {
  virtual void foo();
};

struct B : A {
  constexpr void bar() { foo(); }
  static void foo();
};
