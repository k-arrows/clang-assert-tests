// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-ASSERT: ActOnOpenMPIteratorVarDecl
// EXPECT-CRASH-ASSERT: IsGlobalVar
// EXPECT-CRASH-ASSERT: TU-scope

void operator bool() {
#pragma omp task depend(iterator(i = 1 : 32))
  ;
}
