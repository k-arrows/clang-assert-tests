// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: VisitCastExpr
// EXPECT-CRASH-ASSERT: hasSameUnqualifiedType
// EXPECT-CRASH-ASSERT: Implicit

void foo(char8_t u8) { (int[])(u8 == U'\u00FF'); }
