// RUN: clang++ -c -fopenacc %s
// EXPECT-CRASH-ASSERT: data
// EXPECT-CRASH-ASSERT: DD
// EXPECT-CRASH-ASSERT: queried

struct S static;

void foo(S &s) {
#pragma acc parallel private(s)
  ;
}
