// RUN: clang++ -c -fopenacc %s
// EXPECT-FAIL

void operator-();

void foo() {
#pragma acc kernels loop
  for (I i = 0; i <= 2; i = -i)
    ;
};
