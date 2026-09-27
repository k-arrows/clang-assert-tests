// RUN: clang++ -c -fopenmp %s
// EXPECT-FAIL

void foo() {
  volatile int len = 8;
#pragma omp teams distribute parallel for simd simdlen(8) safelen(len)
  ;
}
