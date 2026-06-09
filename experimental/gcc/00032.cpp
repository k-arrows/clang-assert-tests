// RUN: clang++ -c -fopenmp %s
// EXPECT-FAIL

void foo() {
  int i;
#pragma omp simd
  for i = 0;
}
