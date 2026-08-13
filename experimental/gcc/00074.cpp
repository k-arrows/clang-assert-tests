// RUN: clang++ -c -fopenmp %s
// EXPECT-PASS

struct S {
  void foo() {
#pragma omp declare mapper(S s) map(s, s)
  }
};
