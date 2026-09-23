// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-ASSERT: IntegerLiteral
// EXPECT-CRASH-ASSERT: isIntegerType
// EXPECT-CRASH-ASSERT: Illegal

void foo() {
#pragma omp flatten
  for (int i = 0; i < 2; i++)
    for (int j = 0.; j < 2; j++)
      ;
}
