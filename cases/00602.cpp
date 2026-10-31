// RUN: clang++ -c -x c -O1 %s
// EXPECT-CRASH-ASSERT: FinishFunction
// EXPECT-CRASH-ASSERT: LifetimeExtendedCleanupStack
// EXPECT-CRASH-ASSERT: mismatched

int foo(int *i) { return 1; };
void bar(char *c[foo((int[]){})]) {}
