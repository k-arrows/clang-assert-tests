// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: APInt
// EXPECT-CRASH-ASSERT: isUIntN
// EXPECT-CRASH-ASSERT: N-bit

int foo() {
  unsigned _BitInt(1) c;
  return __builtin_stdc_bit_ceil(c);
}
