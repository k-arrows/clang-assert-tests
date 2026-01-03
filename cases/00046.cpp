// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: EvaluateIntegerOrLValue
// EXPECT-CRASH-ASSERT: isPRValue
// EXPECT-CRASH-ASSERT: isIntegralOrEnumerationType

char isfpclass_pdenorm_0[__builtin_isfpclass(1.0f, 1.0f) ? 1 : -1];
