// RUN: clang++ -c -x c %s
// EXPECT-CRASH-ASSERT: getCorrespondingSignedType
// EXPECT-CRASH-ASSERT: hasSignedIntegerRepresentation
// EXPECT-CRASH-ASSERT: isSignedFixedPointType
// EXPECT-CRASH-ASSERT: Unexpected

void foo(_Bool *zn) { printf("%zn", zn); }
