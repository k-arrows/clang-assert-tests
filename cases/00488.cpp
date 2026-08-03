// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-ASSERT: getTypeForDecl
// EXPECT-CRASH-ASSERT: TagDecl

enum omp_interop_t : long unsigned int {};

template <typename T> void foo() {
  T t;
#pragma omp interop init(target : t)
}

void bar(int *y) {
  foo<omp_interop_t>();
  --y;
}
