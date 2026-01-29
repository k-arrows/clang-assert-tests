// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: LexIncludeFilename
// EXPECT-CRASH-ASSERT: ParsingFilename
// EXPECT-CRASH-ASSERT: reentered 

#if __has_embed(__has_include)
#endif
