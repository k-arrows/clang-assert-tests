// RUN: clang++ -c -fms-compatibility %s
// EXPECT-CRASH-ASSERT: execute
// EXPECT-CRASH-ASSERT: IC_IMM
// EXPECT-CRASH-ASSERT: register

void foo() { __asm mov eax, -eax }
