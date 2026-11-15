// RUN: clang++ -c -fopenmp -fopenmp-enable-irbuilder %s
// EXPECT-CRASH-ASSERT: AssertSuccess
// EXPECT-CRASH-ASSERT: R.isInvalid
// EXPECT-CRASH-ASSERT: operation

void foo() {
  int i, n;
#pragma omp for
  for (void i = 0; i < n; i++)
    ;
}
