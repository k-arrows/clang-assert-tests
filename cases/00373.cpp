// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-NOASSERT

[[omp::directive (begin declare target device_type())]];
