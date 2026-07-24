// RUN: clang++ -c -fms-compatibility %s
// EXPECT-CRASH-ASSERT: ParseMSAsmIdentifier
// EXPECT-CRASH-ASSERT: EndOfStream
// SKIP: aarch64

void foo() { __asm mov eax, has_type < std:: }
