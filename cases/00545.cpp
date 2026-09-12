// RUN: clang++ -c -fms-compatibility %s
// EXPECT-CRASH-ASSERT: insert
// EXPECT-CRASH-ASSERT: ProfileID
// EXPECT-CRASH-ASSERT: token

void foo(int bar[__unaligned]) {}
