// RUN: clang++ -c -std=c++03 %s
// EXPECT-CRASH-ASSERT: BuildConvertedConstantExpression
// EXPECT-CRASH-ASSERT: CPlusPlus11
// EXPECT-CRASH-ASSERT: isCCEAllowedPreCXX11
// EXPECT-CRASH-ASSERT: TTP

template <int... T>
requires <T...[0]>
