// RUN: clang++ -c -fopenmp-simd %s
// EXPECT-PASS

void foo(...);

void bar() {
#pragma omp flatten
  for (int i = 0; i < 2; i++)
    for (int j = 0; j < 2; j++)
      foo(i, j);
}
