// RUN: clang++ -c -fopenacc %s
// EXPECT-FAIL

struct S {
  void foo() {
#pragma acc cache(bar })
  }
};
