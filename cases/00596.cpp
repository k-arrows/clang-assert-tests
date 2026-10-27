// RUN: clang++ -c -target avr -std=c++2b %s
// EXPECT-CRASH-ASSERT: FoldBitCast
// EXPECT-CRASH-ASSERT: castIsValid
// EXPECT-CRASH-ASSERT: constantexpr

void foo() {
  void *bar = &&label;
label:
}
