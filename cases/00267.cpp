// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-ASSERT: getOpenMPCaptureRegionForClause
// EXPECT-CRASH-ASSERT: isAllowedClauseForDirective
// EXPECT-CRASH-ASSERT: CKind-clause

void foo() {
#pragma omp taskloop transparent
  for (int i = 0; i < 2; i++)
    ;
}
