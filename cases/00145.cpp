// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: ComputeRecordLayout
// EXPECT-CRASH-ASSERT: Size
// EXPECT-CRASH-ASSERT: bitfield

struct S {
  unsigned int a : 0400000;
} s;
