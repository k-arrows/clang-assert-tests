// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-ASSERT: ActOnOpenMPParallelGenericLoopDirective
// EXPECT-CRASH-ASSERT: isDependentContext
// EXPECT-CRASH-ASSERT: builtAll
// EXPECT-CRASH-ASSERT: exprs

template <int I>
void foo() = ^{
#pragma omp parallel loop collapse(I)
  for (int i = 0; i < 2; i++)
    ;
}
