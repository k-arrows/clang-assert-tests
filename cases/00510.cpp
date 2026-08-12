// RUN: clang++ -c -x c %s
// EXPECT-CRASH-ASSERT: VisitBinaryOperator
// EXPECT-CRASH-ASSERT: isVectorType
// EXPECT-CRASH-ASSERT: LHS
// EXPECT-CRASH-ASSERT: RHS
// EXPECT-CRASH-ASSERT: Must

typedef double v4 __attribute__((vector_size(32)));

void foo() {
  _Atomic v4 x = {0, 1, 2, 3};
  x *= (v4){0, 1, 2, 3};
}
