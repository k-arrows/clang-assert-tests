// RUN: clang++ -c %s
// EXPECT-CRASH-NOASSERT

void foo() {
  struct S {
    void bar();
  };
  void S::bar();
}

void baz() { foo(); }
