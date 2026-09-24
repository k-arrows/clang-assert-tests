// RUN: clang++ -c -fopenmp %s
// EXPECT-FAIL

class C {
  C c;

  template <typename T> void foo() {
#pragma omp target teams distribute map(c)
  }
};
