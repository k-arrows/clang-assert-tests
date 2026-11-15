// RUN: clang++ -c -fopenmp -fopenmp-enable-irbuilder %s
// EXPECT-CRASH-ASSERT: getNumber
// EXPECT-CRASH-ASSERT: getParent
// EXPECT-CRASH-ASSERT: only

int foo() {
  void bar();
  bar();
  return 0;
}

void baz(int lin) {
#pragma omp simd linear(lin : foo())
  for (int i = 0; i < 2; i++)
    ;
#pragma omp simd
  for (int j = 0; j < 2; j++)
    ;
}
