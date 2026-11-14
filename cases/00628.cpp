// RUN: clang++ -c -fopenmp -fopenmp-enable-irbuilder %s
// EXPECT-CRASH-ASSERT: APInt
// EXPECT-CRASH-ASSERT: isIntN
// EXPECT-CRASH-ASSERT: N-bit

void foo() {
#pragma omp for
  for (bool i = 0; i < 2; i++)
    ;
}
