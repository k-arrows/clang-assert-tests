// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-ASSERT: ConsumeToken
// EXPECT-CRASH-ASSERT: isTokenSpecial
// EXPECT-CRASH-ASSERT: Should

void foo(int **x) {
#pragma omp target map(iterator(i = 0 : 42), iterator(j = 0 : 42), to : x[i][j])
  ;
}
