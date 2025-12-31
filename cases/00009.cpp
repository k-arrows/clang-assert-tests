// RUN: clang++ -c -x c %s
// EXPECT-CRASH-ASSERT: getConstantArrayType
// EXPECT-CRASH-ASSERT: isDependentType
// EXPECT-CRASH-ASSERT: isIncompleteType
// EXPECT-CRASH-ASSERT: isConstantSizeType
// EXPECT-CRASH-ASSERT: VLAs

void foo() {
  for (;;) {
    int x[][bar()] = {};
  }
}
