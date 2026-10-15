// RUN: clang++ -c -fopenmp %s
// EXPECT-PASS

void foo() {
#pragma omp metadirective when(device = {kind(host)} : parallel)
#pragma omp metadirective when(device = {kind(host)} :)
}
