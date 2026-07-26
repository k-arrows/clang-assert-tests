// RUN: clang++ -c -fms-compatibility %s
// EXPECT-CRASH-ASSERT: execute
// EXPECT-CRASH-ASSERT: Op2.second
// EXPECT-CRASH-ASSERT: Division

void foo() {
  __asm { return 1 / 0; }
}
