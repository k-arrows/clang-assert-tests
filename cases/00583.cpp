// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-ASSERT: addDSA
// EXPECT-CRASH-ASSERT: OMPC_unknown
// EXPECT-CRASH-ASSERT: Data.Attributes
// EXPECT-CRASH-ASSERT: OMPC_firstprivate
// EXPECT-CRASH-ASSERT: OMPC_lastprivate
// EXPECT-CRASH-ASSERT: isLoopControlVariable
// EXPECT-CRASH-ASSERT: OMPC_private

template <typename T> void foo(T *argv) {
  T bar, baz(());
#pragma omp parallel private(argv) reduction(+ : bar, baz[argv])
  ;
}

void bar(char **argv) { foo<char>(argv[0]); }
