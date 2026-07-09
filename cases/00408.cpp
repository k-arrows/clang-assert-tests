// RUN: clang++ -c -fms-compatibility %s
// EXPECT-CRASH-ASSERT: ParseMSAsmIdentifier
// EXPECT-CRASH-ASSERT: EndOfStream

void foo() { __asm mov eax, has_type < std:: }
