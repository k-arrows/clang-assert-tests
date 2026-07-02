// RUN: clang++ -c -fopenacc %s
// EXPECT-CRASH-NOASSERT

struct S {
  int I;
  void foo() {
#pragma acc loop reduction(+ : I)
#pragma acc loop reduction(& : I)
    for (int i = 0; i < 2; i++)
      ;
  }
};
