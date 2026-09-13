// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-ASSERT: isOpenMPCapturedDecl
// EXPECT-CRASH-ASSERT: CSI
// EXPECT-CRASH-ASSERT: CapturedRegionScopeInfo

int &foo = []() {
#pragma omp target
  foo(42);
};
