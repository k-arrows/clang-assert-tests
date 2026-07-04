// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-NOASSERT

Foo p;

void foo() {
  long q = 0;
#pragma omp parallel for linear(p, q : 42)
  for (int i = 0; i < 2; i++)
    ;
}
