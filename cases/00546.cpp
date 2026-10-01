// RUN: clang++ -c -fopenmp %s
// EXPECT-FAIL

int &foo = []() {
#pragma omp target
  foo(42);
};
