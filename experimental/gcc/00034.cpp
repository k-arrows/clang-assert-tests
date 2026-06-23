// RUN: clang++ -c -fopenmp %s
// EXPECT-FAIL

void foo() {
#pragma omp task affinity(this)
}
