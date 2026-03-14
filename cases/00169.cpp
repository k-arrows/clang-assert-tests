// RUN: clang++ -c -std=c++2b %s
// EXPECT-CRASH-ASSERT: DiagnoseBadDeduction
// EXPECT-CRASH-ASSERT: ParamD
// EXPECT-CRASH-ASSERT: invalid

struct S {
  template <class... args> static void f() {};
  template <class... args> void f(this S *, ...) {};
};

void g() { S::f(0); }
