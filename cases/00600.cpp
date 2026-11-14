// RUN: clang++ -c %s
// EXPECT-FAIL

#if __has_embed(__FILE__ limit(-1)
