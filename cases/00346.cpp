// RUN: clang++ -fopenmp --analyze %s
// EXPECT-CRASH-ASSERT: isTransparent
// EXPECT-CRASH-ASSERT: isSemanticForm
// EXPECT-CRASH-ASSERT: syntactic

void foo() {
#pragma omp parallel for
  for (int i = {0}; i < 2; i++)
    ;
}
