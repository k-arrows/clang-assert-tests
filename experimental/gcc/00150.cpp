// RUN: clang++ -c -fopenmp %s
// EXPECT-FAIL

int foo(int N) {
#pragma omp target teams
  {
#pragma omp interop
    for (int i = 0; i < N; i++)
      ;
  }
  return 0;
}

int bar() { return foo(42); }
