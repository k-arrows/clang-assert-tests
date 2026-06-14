// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-NOASSERT

void foo () {
  [[omp::directive (target loop)]]
  for (int i = 0; i < 2; i++)
    ;
}
