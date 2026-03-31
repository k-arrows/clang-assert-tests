// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: subtract
// EXPECT-CRASH-ASSERT: getSemantics
// EXPECT-CRASH-ASSERT: Should

extern double INT128_MIN = -INT128_MAX - 1;
