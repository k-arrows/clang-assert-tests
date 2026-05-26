// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: EmitScalarExpr
// EXPECT-CRASH-ASSERT: hasScalarEvaluationKind
// EXPECT-CRASH-ASSERT: Invalid

const void *foo() { return __builtin_preserve_access_index(""); }
