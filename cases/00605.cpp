// RUN: clang++ -c -target aarch64 %s
// EXPECT-CRASH-ASSERT: getCorrespondingUnsignedType
// EXPECT-CRASH-ASSERT: hasIntegerRepresentation
// EXPECT-CRASH-ASSERT: isEnumeralType
// EXPECT-CRASH-ASSERT: isFixedPointType
// EXPECT-CRASH-ASSERT: Unexpected

class C {};

void foo(C *bar) {
  __clang_svint32x4_t *baz;
  baz = bar;
}
