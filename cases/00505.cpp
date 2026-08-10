// RUN: clang++ -c -fopenacc %s
// EXPECT-CRASH-ASSERT: EmitStmt
// EXPECT-CRASH-ASSERT: statement

void foo() {
#pragma acc parallel
  _Alignas(4);
}
