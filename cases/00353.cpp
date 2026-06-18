// RUN: clang++ -c -fopenacc %s
// EXPECT-FAIL

void foo() {
#pragma acc data default(none)
  using i;
}
