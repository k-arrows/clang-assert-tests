// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-ASSERT: compareSigned
// EXPECT-CRASH-ASSERT: RHS.BitWidth
// EXPECT-CRASH-ASSERT: comparison

void foo() {
  const char len = 8;
#pragma omp simd simdlen(len) safelen(8)
  for (int i = 0; i < 2; i++)
    ;
}
