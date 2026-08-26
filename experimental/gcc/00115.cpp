// RUN: clang++ -c -fopenmp %s
// EXPECT-PASS

template <int N> struct S {
#pragma omp declare simd simdlen(N)
  void foo(int *bar());
};

S<42> s;
