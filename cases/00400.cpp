// RUN: clang++ -c -fblocks %s
// EXPECT-CRASH-ASSERT: ActOnBlockStmtExpr
// EXPECT-CRASH-ASSERT: exprNeedsCleanups
// EXPECT-CRASH-ASSERT: correctly

struct S {
  ~S();
};

void foo(T);

void bar() {
  ^{
    return foo(S());
  };
}
