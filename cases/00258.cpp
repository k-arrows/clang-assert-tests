// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: CheckConvertedConstantExpression
// EXPECT-CRASH-ASSERT: isIntegralOrEnumerationType
// EXPECT-CRASH-ASSERT: unexpected

enum struct __attribute__((mode(SF))) E { foo = 42 };
