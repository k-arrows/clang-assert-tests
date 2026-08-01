// RUN: clang++ -c -fopenmp %s
// EXPECT-FAIL

void foo() {
#pragma omp taskloop transparent
  for (int i = 0; i < 2; i++)
    ;
}
