// RUN: clang++ -c -x c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: evaluateValueImpl
// EXPECT-CRASH-ASSERT: isValueDependent

void foo() {
  struct S {
    int a;
    double a;
  };
  const struct S s = {0, 0.};
  *(int *)(&s.a) = 42;
}
