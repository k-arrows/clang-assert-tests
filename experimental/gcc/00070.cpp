// RUN: clang++ -c -fopenmp-simd %s
// EXPECT-FAIL

struct S {};

template <typename T> void foo() {
  int y;
#pragma omp declare mapper(T var) map(always, to : var, y)
}

void bar() { foo<S>(); }
