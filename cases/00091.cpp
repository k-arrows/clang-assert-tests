// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getASTIndex
// EXPECT-CRASH-ASSERT: HasThis
// EXPECT-CRASH-ASSERT: stored

void foo(int (*g)(const char *h, ...) __attribute__((nonnull(2147483648))) __attribute__((nonnull))) { };
