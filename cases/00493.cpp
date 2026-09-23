// RUN: clang++ -c -fopenmp %s
// EXPECT-FAIL

void foo() {
#pragma omp flatten
  ;
}
