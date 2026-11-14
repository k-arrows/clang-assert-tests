// RUN: clang++ -c -fopenmp %s
// EXPECT-PASS

void foo () {
  [[omp::directive (target loop)]]
  for (int i = 0; i < 2; i++)
    ;
}
