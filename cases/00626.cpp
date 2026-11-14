// RUN: clang++ -c -fopenmp -fopenmp-enable-irbuilder %s
// EXPECT-CRASH-ASSERT: ActOnOpenMPCanonicalLoop
// EXPECT-CRASH-ASSERT: LCAssign
// EXPECT-CRASH-ASSERT: BO_Assign
// EXPECT-CRASH-ASSERT: assignment

void foo() {
  int i;
#pragma omp for
  for (i += 0; i < 2; i++)
    ;
};
