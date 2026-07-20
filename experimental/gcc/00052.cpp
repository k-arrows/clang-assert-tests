// RUN: clang++ -c -fopenmp %s
// EXPECT-FAIL

#pragma omp begin declare variant match(implementation = {vendor("gnu")})
int foo() { return 1; }
#pragma omp end declare variant

void bar();
char bar();
