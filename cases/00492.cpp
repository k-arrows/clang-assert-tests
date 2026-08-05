// RUN: clang++ -c -fopenacc %s
// EXPECT-CRASH-NOASSERT

struct S {
  void foo() {
#pragma acc cache(bar })
  }
};
