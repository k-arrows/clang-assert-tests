// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: checkForConstantInitialization
// EXPECT-CRASH-ASSERT: WasEvaluated
// EXPECT-CRASH-ASSERT: already

__thread const int m = reinterpret_cast<T>(m)
