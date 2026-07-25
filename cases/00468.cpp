// RUN: clang++ -c -x c -std=c23 %s
// EXPECT-CRASH-ASSERT: HandleEmbedDirective
// EXPECT-CRASH-ASSERT: CurTok.is
// EXPECT-CRASH-ASSERT: expected

#embed <foo> limit(defined(bar)),
