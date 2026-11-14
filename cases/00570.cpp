// RUN: clang++ -c -fopenmp %s
// EXPECT-PASS

void foo(bool b) {
#pragma omp tile sizes(b)
  for (int i = 0; i < 2; i++)
    ;
}
