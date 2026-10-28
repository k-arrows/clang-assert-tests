// RUN: clang++ -c -x c -target aarch64 %s
// EXPECT-CRASH-ASSERT: getCorrespondingUnsignedType
// EXPECT-CRASH-ASSERT: hasUnsignedIntegerRepresentation
// EXPECT-CRASH-ASSERT: isUnsignedFixedPointType
// EXPECT-CRASH-ASSERT: Unexpected

__SVInt8_t *foo = "bar";
