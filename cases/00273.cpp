// RUN: clang++ -c -fopenacc %s
// EXPECT-CRASH-ASSERT: ActOnUsingDeclaration
// EXPECT-CRASH-ASSERT: getFlags
// EXPECT-CRASH-ASSERT: DeclScope
// EXPECT-CRASH-ASSERT: Invalid

void foo() {
#pragma acc parallel
  using i;
  for (int i = 0; i < 2; i++)
    ;
}
