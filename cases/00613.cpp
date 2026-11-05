// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: EvaluateFloat
// EXPECT-CRASH-ASSERT: isPRValue
// EXPECT-CRASH-ASSERT: isRealFloatingType

_Atomic float foo() { return foo() + 42.0f; }
