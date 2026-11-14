// RUN: clang++ -c -fopenmp -fopenmp-enable-irbuilder %s
// EXPECT-CRASH-ASSERT: getSingleDecl
// EXPECT-CRASH-ASSERT: isSingleDecl
// EXPECT-CRASH-ASSERT: Isn't

void foo() {
#pragma omp for
  for (int i = 0; i < 2; i++)
    ;
#pragma omp for
  for (int i, j; i < 2; i++)
    ;
}
