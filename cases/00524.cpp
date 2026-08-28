// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-ASSERT: finishLinearClauses
// EXPECT-CRASH-ASSERT: isDependentContext
// EXPECT-CRASH-ASSERT: builtAll
// EXPECT-CRASH-ASSERT: exprs

template <class T, int N> &T::foo() {
#pragma omp simd collapse(N)
  ;
}
