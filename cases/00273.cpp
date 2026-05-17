// RUN: clang++ -c -fopenacc %s
// EXPECT-FAIL

void foo() {
#pragma acc parallel
  using i;
  for (int i = 0; i < 2; i++)
    ;
}
