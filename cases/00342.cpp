// RUN: clang++ -c -fopenmp %s
// EXPECT-PASS

void foo() {
#pragma omp unroll partial
  for (int i = {0}; i < 2; i++)
    ;
}
