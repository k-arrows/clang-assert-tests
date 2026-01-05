// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: DiagnoseProhibitedCXX11Attribute
// EXPECT-CRASH-ASSERT: Tok
// EXPECT-CRASH-ASSERT: isCXX11AttributeSpecifier

void foo(void {} [[using
