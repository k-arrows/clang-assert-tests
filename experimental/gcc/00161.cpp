// RUN: clang++ -c -fopenmp %s
// EXPECT-FAIL

template <typename T> void foo(int *y) {
  [[omp::directive(dispatch)]] bar<T>(y);
}

void baz(int a) { foo<int *>(&a); }
