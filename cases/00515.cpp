// RUN: clang++ -c -fopenmp %s
// EXPECT-FAIL

namespace N {
void foo();
}

#pragma omp declare simd
#pragma omp declare target to(N::foo)
