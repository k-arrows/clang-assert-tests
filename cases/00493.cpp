// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-NOASSERT

void foo() {
#pragma omp flatten
  ;
}
