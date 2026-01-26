// RUN: clang++ --analyze %s
// EXPECT-CRASH-ASSERT: VisitLogicalExpr
// EXPECT-CRASH-ASSERT: getAs
// EXPECT-CRASH-ASSERT: PreStmtPurgeDeadSymbols
// EXPECT-CRASH-ASSERT: BlockEntrance

struct S {
  int a, b;
  void foo();
};

void S::foo() { [[assume(a == 42 && b == 43)]]; }
