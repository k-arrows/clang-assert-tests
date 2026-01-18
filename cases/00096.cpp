// RUN: clang++ -c -x c -fopenmp %s
// EXPECT-CRASH-ASSERT: dyn_cast
// EXPECT-CRASH-ASSERT: isPresent
// EXPECT-CRASH-ASSERT: non-existent

#include <omp.h>

int main() {
#pragma omp target map(from : is_initial, dev_num) device(dev)
  {
  }
}
