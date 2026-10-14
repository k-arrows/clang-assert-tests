// RUN: clang++ -c -fopenmp-simd %s
// EXPECT-CRASH-ASSERT: cast_if_present
// EXPECT-CRASH-ASSERT: isa
// EXPECT-CRASH-ASSERT: incompatible

void foo(...);

void bar() {
#pragma omp flatten
  for (int i = 0; i < 2; i++)
    for (int j = 0; j < 2; j++)
      foo(i, j);
}
