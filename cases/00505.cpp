// RUN: clang++ -c -fopenacc %s
// EXPECT-PASS

void foo() {
#pragma acc parallel
  _Alignas(4);
}
