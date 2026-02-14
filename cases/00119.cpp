// RUN: clang++ -c %s
// EXPECT-FAIL

#if __has_embed(__has_include)
#endif
