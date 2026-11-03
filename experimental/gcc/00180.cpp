// RUN: clang++ -c -fopenmp %s
// EXPECT-PASS

template <typename> struct S {};
#pragma omp begin declare variant match(implementation = {vendor("gnu")})
template <template <typename> class T> void S() {}
#pragma omp end declare variant
