// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-ASSERT: getOMPCancelDestination
// EXPECT-CRASH-ASSERT: OMPD_for
// EXPECT-CRASH-ASSERT: OMPD_sections
// EXPECT-CRASH-ASSERT: OMPD_parallel_sections
// EXPECT-CRASH-ASSERT: OMPD_parallel_for
// EXPECT-CRASH-ASSERT: OMPD_distribute_parallel_for
// EXPECT-CRASH-ASSERT: OMPD_target_parallel_for
// EXPECT-CRASH-ASSERT: OMPD_teams_distribute_parallel_for
// EXPECT-CRASH-ASSERT: OMPD_target_teams_distribute_parallel_for

template <class T> T foo() {
#pragma omp masked taskloop
  for (int i = 0; i < 2; i++) {
#pragma omp cancel taskgroup
  }
  return T();
}

int bar(int N) { return (foo<int>()); }
