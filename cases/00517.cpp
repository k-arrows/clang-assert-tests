// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-ASSERT: ActOnOpenMPCopyprivateClause
// EXPECT-CRASH-ASSERT: VD
// EXPECT-CRASH-ASSERT: isOpenMPCapturedDecl

struct S {
  int a;
  S() {
#pragma omp parallel firstprivate(a)
#pragma omp taskloop
#pragma omp single copyprivate(a)
  };
};
