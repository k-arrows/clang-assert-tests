// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-ASSERT: getOrCreateStaticVarDecl
// EXPECT-CRASH-ASSERT: ObjCMethodDecl
// EXPECT-CRASH-ASSERT: unexpected

struct S {
  int i;

  template <int N> void foo() {
#pragma omp parallel default(firstprivate)
    [=]() -> int { return i++; }();
  }
};

void bar() {
  S s;
  s.foo<42>();
}
