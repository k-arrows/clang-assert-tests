// RUN: clang++ -c -x c %s
// EXPECT-FAIL

void foo() {
  struct {} a[0xdeadbeef00000000UL];
  __builtin_memcpy(&a[2], a, 2);
}
