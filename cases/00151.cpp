// RUN: clang++ -c -x c -fopenmp %s
// EXPECT-CRASH-ASSERT: setParams
// EXPECT-CRASH-ASSERT: getNumParams
// EXPECT-CRASH-ASSERT: mismatch

typedef enum omp_interop_t {
  omp_interop_none = 0,
  __omp_interop_t_max__ = __UINTPTR_MAX__
} omp_interop_t;

void foo();

#pragma omp declare variant(foo) append_args(interop(target))
void bar(int *x);
