// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: ParseParenExpression
// EXPECT-CRASH-ASSERT: CodeDC
// EXPECT-CRASH-ASSERT: isFileContext
// EXPECT-CRASH-ASSERT: statement

struct S {};

int foo = [] { void S::bar(__attribute__((assume(({}))))) };
