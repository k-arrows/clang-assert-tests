// RUN: clang++ -c -std=c++26 %s
// EXPECT-CRASH-ASSERT: getRewrittenExpr
// EXPECT-CRASH-ASSERT: hasRewrittenInit
// EXPECT-CRASH-ASSERT: expected

struct S {
  int s1, s2 = 0;
};

void foo() {
  template for (int x : {S(1)}) {}
}
