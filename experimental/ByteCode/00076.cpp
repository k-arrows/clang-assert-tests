// RUN: clang++ -c -std=c++23 -fopenmp -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

void foo() {
  char i = 0;
  char &c = i;
#pragma omp for collapse(2)
  for (c = 0; c < 2; c++)
    for (int j = 0; j < 4 + c; j++)
      ;
}
