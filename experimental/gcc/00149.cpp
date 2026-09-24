// RUN: clang++ -c -fopenmp %s
// EXPECT-PASS

int i;
int &j = i;

void foo() {
#pragma omp target data use_device_addr(i, j)
  ;
}
