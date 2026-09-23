// RUN: clang++ -c -fopenmp -fms-compatibility %s
// EXPECT-CRASH-ASSERT: AnalyzeComparison
// EXPECT-CRASH-ASSERT: hasSignedIntegerRepresentation
// EXPECT-CRASH-ASSERT: unsigned

void foo(int n) {
#pragma omp flatten depth(2)
  for (size_t i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      ;
}
