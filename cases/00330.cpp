// RUN: clang++ -c -fopenmp %s
// EXPECT-PASS
// SKIP: aarch64

void foo() {
  const char len = 8;
#pragma omp simd simdlen(len) safelen(8)
  for (int i = 0; i < 2; i++)
    ;
}
