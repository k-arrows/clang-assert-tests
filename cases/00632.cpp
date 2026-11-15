// RUN: clang++ -c -fopenmp -fopenmp-enable-irbuilder %s
// EXPECT-CRASH-ASSERT: buildLoopVarFunc
// EXPECT-CRASH-ASSERT: Invalid
// EXPECT-CRASH-ASSERT: capture-by-value

int n;

void foo() {
  int i;
#pragma omp for
  for (void i = 0; i < n; i++)
    ;
}
