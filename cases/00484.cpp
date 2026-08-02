// RUN: clang++ -c -fms-compatibility %s
// EXPECT-CRASH-ASSERT: parseMSInlineAsm
// EXPECT-CRASH-ASSERT: AsmStart
// EXPECT-CRASH-ASSERT: Expected

void foo() {
  __asm { return 1f; }
}
