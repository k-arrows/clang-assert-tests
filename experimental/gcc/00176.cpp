// RUN: clang++ -c -fopenmp %s
// EXPECT-FAIL

#define __GOMP_UINTPTR_T_ENUM : __UINTPTR_TYPE__

typedef enum omp_interop_t __GOMP_UINTPTR_T_ENUM {} omp_interop_t;

struct S {
  omp_interop_t obj;
  void foo() {
#pragma omp dispatch interop(obj)
    ;
  }
};
