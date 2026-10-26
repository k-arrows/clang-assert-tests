// RUN: clang++ -c -target avr -fopenmp %s
// EXPECT-CRASH-ASSERT: compare
// EXPECT-CRASH-ASSERT: BitWidth
// EXPECT-CRASH-ASSERT: comparison

int a[10], b[10];

void foo() {
#pragma omp for ordered(1)
  for (int i = 0; i < 2; i++) {
#pragma omp ordered depend(sink : i)
    b[i] = a[i];
  }
}
