// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: lowerEarlyIntrinsics
// EXPECT-CRASH-ASSERT: isPresplitCoroutine
// EXPECT-CRASH-ASSERT: Switch-Resumed

void foo() { __builtin_coro_id(32, 0, 0, 0); }
