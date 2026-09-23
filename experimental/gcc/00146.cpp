// RUN: clang++ -c -fopenmp %s
// EXPECT-FAIL

template <typename T> void foo() {
#pragma omp parallel sections
}

void bar() { foo<int>(); }
