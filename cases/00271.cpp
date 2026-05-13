// RUN: clang++ -c -ffixed-point %s
// EXPECT-CRASH-ASSERT: PerformImplicitConversion
// EXPECT-CRASH-ASSERT: From
// EXPECT-CRASH-ASSERT: isIntegerType

constexpr _Complex short foo = 123.4hk * 5.6hk;
