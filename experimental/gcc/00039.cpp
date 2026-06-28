// RUN: clang++ -c -fopenmp %s
// EXPECT-FAIL

[[omp::directive(begin assumes
#pragma GCC diagnostic
                 )]];
