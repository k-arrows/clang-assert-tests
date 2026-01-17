// RUN: clang++ -c -x c %s
// EXPECT-CRASH-ASSERT: CheckSubElementType
// EXPECT-CRASH-ASSERT: isRecordType
// EXPECT-CRASH-ASSERT: isVectorType
// EXPECT-CRASH-ASSERT: isOpenCLSpecificType
// EXPECT-CRASH-ASSERT: isMFloat8Type
// EXPECT-CRASH-ASSERT: Unexpected

typedef union {
  struct {
    void foo;
  } a;
} b;

b bar[2] = {
  [0].a.foo = 1,
};
