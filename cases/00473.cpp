// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: VisitUnaryExprOrTypeTraitExpr
// EXPECT-CRASH-ASSERT: isSizelessVectorType

using vec __attribute__((vector_size(16))) = int &bar;
int baz = __builtin_vectorelements(vec);
