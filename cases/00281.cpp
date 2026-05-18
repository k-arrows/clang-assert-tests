// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: get
// EXPECT-CRASH-ASSERT: MIN_INT_BITS
// EXPECT-CRASH-ASSERT: bitwidth

struct S {
  int n : 0xFFFFFFFFULL = 0;
};

S s = {};
