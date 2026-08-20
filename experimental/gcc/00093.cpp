// RUN: clang++ -c -fopenmp %s
// EXPECT-FAIL

struct S {};

#pragma omp declare mapper(S)

int main() { return 0; };
