// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: DiscardUntilEndOfDirective
// EXPECT-CRASH-ASSERT: isNot
// EXPECT-CRASH-ASSERT: EOF

#if __has_embed(__FILE__ limit(-1)
