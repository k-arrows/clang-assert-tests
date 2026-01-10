// RUN: clang++ -c -x c %s
// EXPECT-CRASH-ASSERT: adjustIndex
// EXPECT-CRASH-ASSERT: ugt
// EXPECT-CRASH-ASSERT: in-bounds

void foo() {
  struct {} a[0xdeadbeef00000000UL];
  __builtin_memcpy(&a[2], a, 2);
}
