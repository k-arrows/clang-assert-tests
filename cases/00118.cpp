// RUN: clang++ --analyze -Xanalyzer -analyzer-output=text %s
// EXPECT-PASS

struct S {
  int a, b;
  void foo();
};

void S::foo() { [[assume(a == 42 && b == 43)]]; }
