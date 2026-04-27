// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: rem
// EXPECT-CRASH-ASSERT: A.isNumber
// EXPECT-CRASH-ASSERT: B.isNumber

void foo() { *((int *)0) = (long)foo % 42; }
