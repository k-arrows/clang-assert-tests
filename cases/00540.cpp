// RUN: clang++ -c -fms-compatibility %s
// EXPECT-CRASH-ASSERT: DiscardUntilEndOfDirective
// EXPECT-CRASH-ASSERT: isNot
// EXPECT-CRASH-ASSERT: EOF

# 1 __identifier(foo
