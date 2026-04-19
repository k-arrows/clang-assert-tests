// RUN: clang++ -c -fopenmp %s
// EXPECT-CRASH-NOASSERT

#pragma omp begin declare variant match(device = {kind(fpga)})
pragma omp end declare variant
