// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-ASSERT: operator>
// EXPECT-CRASH-ASSERT: IsUnsigned
// EXPECT-CRASH-ASSERT: Signedness

void foo() {
  const char32_t len = 8;
#pragma omp simd simdlen(8) safelen(len)
  for (int i = 0; i < 2; i++)
    ;
}
