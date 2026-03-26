// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-ASSERT: DiagnoseUnusedButSetDecl
// EXPECT-CRASH-ASSERT: getSecond
// EXPECT-CRASH-ASSERT: VarDecl

void foo(void) {
  int a[64];
  int *i, *j;
#pragma omp parallel for collapse(2)
  for (i = &a[0]; i < &a[32]; i++)
    for (j = i + 4; j < i + 8; j++)
      ;
}
