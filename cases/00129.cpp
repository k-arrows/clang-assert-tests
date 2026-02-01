// RUN: clang++ -c -x c -std=c23 %s
// EXPECT-CRASH-ASSERT: isNullPointer
// EXPECT-CRASH-ASSERT: isLValue
// EXPECT-CRASH-ASSERT: Invalid

constexpr int *foo = 0.0L;
