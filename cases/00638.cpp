// RUN: clang++ -c -x c %s
// EXPECT-CRASH-ASSERT: EmitAggExprToLValue
// EXPECT-CRASH-ASSERT: hasAggregateEvaluationKind
// EXPECT-CRASH-ASSERT: Invalid

void foo() {
  __builtin_va_list ap;
  int (*p)() = __builtin_va_arg(ap, int());
}
