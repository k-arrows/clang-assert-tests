// RUN: clang++ -c -fms-compatibility %s
// EXPECT-CRASH-ASSERT: isCXXDeclarationSpecifier
// EXPECT-CRASH-ASSERT: isNot
// EXPECT-CRASH-ASSERT: TryAnnotateName

void foo(char16_) {}
