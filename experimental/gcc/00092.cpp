// RUN: clang++ -c -fopenmp %s
// EXPECT-FAIL

struct S {};

#pragma omp declare mapper(S[42])
