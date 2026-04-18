// RUN: clang++ -c -fopenacc %s
// EXPECT-FAIL

struct S static;

void foo(S &s) {
#pragma acc parallel private(s)
  ;
}
