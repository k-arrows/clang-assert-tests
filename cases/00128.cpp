// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-ASSERT: Align
// EXPECT-CRASH-ASSERT: isPowerOf2_64
// EXPECT-CRASH-ASSERT: not

long double ld;

int main() {
  long double le = 0.0L;
#pragma omp atomic compare
  ld = ld == le ? 7.0L : ld;
  return 0;
}
