// RUN: clang++ -c -fms-compatibility %s
// EXPECT-CRASH-ASSERT: ActOnNumericConstant
// EXPECT-CRASH-ASSERT: getTypeSize
// EXPECT-CRASH-ASSERT: getBitWidth
// EXPECT-CRASH-ASSERT: intmax_t

static_assert(1234i8, "");
