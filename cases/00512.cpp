// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-ASSERT: getUninstantiatedDefaultArg
// EXPECT-CRASH-ASSERT: hasUninstantiatedDefaultArg
// EXPECT-CRASH-ASSERT: Wrong

void foo() {
#pragma omp parallel
  class O {
    template <class T> class I {
      void bar(bool b = true);
    };
    I<int> bar;
  };
}
