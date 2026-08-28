// RUN: clang++ -c -x c -fopenmp %s
// EXPECT-FAIL

void foo(int a, int *__restrict__ a) {
#pragma omp simd reduction(+ : a)
}
