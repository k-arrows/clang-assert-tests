// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: get
// EXPECT-CRASH-ASSERT: MAX_INT_BITS
// EXPECT-CRASH-ASSERT: bitwidth

struct S {
  int a : 2147483648;
} s;
