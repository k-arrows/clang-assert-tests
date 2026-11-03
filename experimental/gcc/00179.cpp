// RUN: clang++ -c -fopenmp %s
// EXPECT-FAIL

struct S {
  char foo();
};

void bar() {
  int i;
  S s;
#pragma omp dispatch
  i = s.foo();
}
