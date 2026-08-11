// RUN: clang++ -c %s
// EXPECT-PASS

int foo() {
  unsigned _BitInt(1) c;
  return __builtin_stdc_bit_ceil(c);
}
