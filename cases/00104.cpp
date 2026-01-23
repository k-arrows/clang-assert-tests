// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: ParseCXXAmbiguousParenExpression
// EXPECT-CRASH-ASSERT: Tok
// EXPECT-CRASH-ASSERT: getEofData

void foo() { (void(void *(0;))) bar; }
