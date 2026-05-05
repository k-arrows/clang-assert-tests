// RUN: clang++ -c -ffixed-point %s
// EXPECT-CRASH-ASSERT: PerformImplicitConversion
// EXPECT-CRASH-ASSERT: ToType
// EXPECT-CRASH-ASSERT: isIntegerType

constexpr _Accum A = 42.0i;
