// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: pasteTokens
// EXPECT-CRASH-ASSERT: IsAtEnd
// EXPECT-CRASH-ASSERT: RHS

#define FOO(x, y) x####y
FOO(bar, )
