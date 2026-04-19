// RUN: clang++ -c -x c -fopenmp %s
// EXPECT-CRASH-ASSERT: isDeclExternC
// EXPECT-CRASH-ASSERT: CPlusPlus

struct S {
  int foo(void);
#pragma omp declare variant(foo)
  int bar(void) { return 42; }
};
