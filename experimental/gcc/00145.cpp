// RUN: clang++ -c -fopenmp %s
// EXPECT-FAIL

void foo() {
  int i = j;

#pragma omp target teams distribute parallel for depend(out : j)
  for (int k = 0; k < 2; k++)
    ;
}
