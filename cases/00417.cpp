// RUN: clang++ -c -fms-compatibility %s
// EXPECT-CRASH-ASSERT: findTokensForString
// EXPECT-CRASH-ASSERT: FirstTokOffset
// EXPECT-CRASH-ASSERT: FirstCharOffset

struct S {};

S foo() { __asm {mov eax, 2Uh} };
