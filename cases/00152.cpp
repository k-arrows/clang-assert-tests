// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: EmitCXXMemberOrOperatorMemberCallExpr
// EXPECT-CRASH-ASSERT: mayInsertExtraPadding
// EXPECT-CRASH-ASSERT: unknown

union A {
  bool operator==(const A &) const = default;
};

bool foo() { return A() == A(); }
