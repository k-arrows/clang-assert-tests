// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-ASSERT: Init
// EXPECT-CRASH-ASSERT: getOperand
// EXPECT-CRASH-ASSERT: NewVal

void foo() {
  bool b[42];
#pragma omp teams reduction(+ : b)
  ;
}
