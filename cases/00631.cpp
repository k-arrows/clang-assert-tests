// RUN: clang++ -c -fopenmp -fopenmp-enable-irbuilder %s
// EXPECT-CRASH-ASSERT: buildDistanceFunc
// EXPECT-CRASH-ASSERT: BO_LT
// EXPECT-CRASH-ASSERT: BO_LE
// EXPECT-CRASH-ASSERT: BO_GE
// EXPECT-CRASH-ASSERT: BO_GT
// EXPECT-CRASH-ASSERT: relational

void foo() {
#pragma omp for
  for (int i = 0; i / 2; i++)
    ;
}
