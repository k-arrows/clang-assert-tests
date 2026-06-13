// RUN: clang++ -c -fopenacc %s
// EXPECT-CRASH-ASSERT: ActOnUsingDeclaration
// EXPECT-CRASH-ASSERT: getFlags
// EXPECT-CRASH-ASSERT: DeclScope
// EXPECT-CRASH-ASSERT: Invalid

void foo() {
#pragma acc data default(none)
  using i;
}
