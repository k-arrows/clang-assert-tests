// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-ASSERT: FormatDiagnostic
// EXPECT-CRASH-ASSERT: ModifierLen
// EXPECT-CRASH-ASSERT: unknown

int a;
#pragma omp groupprivate(a)
