// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: VisitCXXNewExpr
// EXPECT-CRASH-ASSERT: isArrayType
// EXPECT-CRASH-ASSERT: non-array

auto p = new int[][42]();
