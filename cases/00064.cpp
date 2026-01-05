// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: DiscardUntilEndOfDirective
// EXPECT-CRASH-ASSERT: isNot
// EXPECT-CRASH-ASSERT: discarding 

#if __has_embed("" if_empty
