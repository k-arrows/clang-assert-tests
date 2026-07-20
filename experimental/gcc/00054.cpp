// RUN: clang++ -c -fopenmp %s
// EXPECT-FAIL

template <class T> void foo() {
#pragma omp for
#pragma omp unroll partial
  for (int i : 0)
    ;
}
