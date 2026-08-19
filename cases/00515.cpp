// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-ASSERT: ActOnReenterFunctionContext
// EXPECT-CRASH-ASSERT: getLexicalParent
// EXPECT-CRASH-ASSERT: lexically

namespace N {
void foo();
}

#pragma omp declare simd
#pragma omp declare target to(N::foo)
