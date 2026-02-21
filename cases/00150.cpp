// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: VisitTypeOfExprTypeLoc
// EXPECT-CRASH-ASSERT: getTypeSpecType
// EXPECT-CRASH-ASSERT: TST_typeofExpr
// EXPECT-CRASH-ASSERT: TST_typeof_unqualExpr

const typedef typeof(nullptr) nullptr_t;

_Atomic nullptr_t a = 0;
