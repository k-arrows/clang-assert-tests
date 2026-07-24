// RUN: clang++ -c -std=c++20 -fms-compatibility %s
// EXPECT-CRASH-ASSERT: ParseMSAsmIdentifier
// EXPECT-CRASH-ASSERT: LineToks.size
// SKIP: aarch64

void foo() { __asm mov bar < >> }
