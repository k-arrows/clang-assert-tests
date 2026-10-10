// RUN: clang++ -c -fopenmp %s
// EXPECT-FAIL

struct S {
  int a;
  S() {
#pragma omp parallel firstprivate(a)
#pragma omp taskloop
#pragma omp single copyprivate(a)
  };
};
