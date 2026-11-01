// RUN: clang++ -c -fopenmp %s
// EXPECT-PASS

void foo() {
#pragma omp flatten
  for (int i = 0; i < 2; i++)
    for (int j = 0.; j < 2; j++)
      ;
}
