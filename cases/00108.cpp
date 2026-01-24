// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getCurLambda
// EXPECT-CRASH-ASSERT: CodeSynthesisContexts

struct S {};

void foo = [] { void S::bar(this auto &&); }
