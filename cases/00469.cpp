// RUN: clang++ -c -fms-compatibility %s
// EXPECT-FAIL
// SKIP: aarch64

void foo() {
  __asm { return 1 / 0; }
}
