// RUN: clang++ -c -x c %s
// EXPECT-CRASH-ASSERT: VisitUnaryExprOrTypeTraitExpr
// EXPECT-CRASH-ASSERT: isArrayType

void foo() { assert(_Countof({})); }
