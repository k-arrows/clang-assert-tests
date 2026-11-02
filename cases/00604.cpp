// RUN: clang++ -c -x c -fms-compatibility %s
// EXPECT-CRASH-ASSERT: ParseCastExpression
// EXPECT-CRASH-ASSERT: Tok.isNot
// EXPECT-CRASH-ASSERT: kw_decltype
// EXPECT-CRASH-ASSERT: kw___super

void foo() { __super; }
