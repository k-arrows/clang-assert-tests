// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: EmitCallArgs
// EXPECT-CRASH-ASSERT: isGenericMethod
// EXPECT-CRASH-ASSERT: isVariablyModifiedType
// EXPECT-CRASH-ASSERT: isObjCRetainableType
// EXPECT-CRASH-ASSERT: getCanonicalType
// EXPECT-CRASH-ASSERT: mismatch

void foo() {
  void bar(const int (&a)[]);
  bar({});
}
