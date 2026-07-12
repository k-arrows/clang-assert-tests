// RUN: clang++ -c -fms-compatibility %s
// EXPECT-CRASH-ASSERT: ParseDirectDeclarator
// EXPECT-CRASH-ASSERT: isPastIdentifier
// EXPECT-CRASH-ASSERT: Haven't

void foo() { __asm mov bar < short, unsigned }
