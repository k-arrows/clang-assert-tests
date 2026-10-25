// RUN: clang++ -c -fopenmp %s
// EXPECT-PASS

#pragma omp begin declare variant match(implementation = {vendor("gnu")})
template <typename T> void foo(T) {}
#pragma omp end declare variant

template <typename T> void foo(T) {}
#pragma omp begin declare variant match(implementation = {vendor("gnu")})
template <typename T> void foo(T) {}
#pragma omp end declare variant
