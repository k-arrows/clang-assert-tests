// RUN: clang++ -c -fopenmp %s
// EXPECT-FAIL

void foo() {
#pragma omp parallel
  class O {
    template <class T> class I {
      void bar(bool b = true);
    };
    I<int> bar;
  };
}
