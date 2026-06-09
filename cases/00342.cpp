// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-ASSERT: AssertSuccess
// EXPECT-CRASH-ASSERT: R.isInvalid
// EXPECT-CRASH-ASSERT: operation

void foo() {
#pragma omp unroll partial
  for (int i = {0}; i < 2; i++)
    ;
}
