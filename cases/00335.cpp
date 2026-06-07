// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: VisitTypeOfTypeLoc
// EXPECT-CRASH-ASSERT: getTypeSpecType
// EXPECT-CRASH-ASSERT: TST_typeofType
// EXPECT-CRASH-ASSERT: TST_typeof_unqualType

const typedef typeof(char *buf) nullptr_t;

_Atomic nullptr_t i = (A().*f());
