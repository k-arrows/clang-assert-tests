// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: discard
// EXPECT-CRASH-ASSERT: toPrimType

struct A {
  struct B {
    B(int i) {}
    C;
    void foo() { (B(42), false); }
  };
};
