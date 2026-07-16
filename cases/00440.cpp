// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-ASSERT: doForAllLoopsBodies
// EXPECT-CRASH-ASSERT: CXXForRangeStmt
// EXPECT-CRASH-ASSERT: range-based

template <class T> int foo(T argc) {
#pragma omp target parallel for collapse(argc)
  ;
  switch (argc) { return 0; }
}
