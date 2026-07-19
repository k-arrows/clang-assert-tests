// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: BuildStmtExpr
// EXPECT-CRASH-ASSERT: exprNeedsCleanups
// EXPECT-CRASH-ASSERT: within

int foo() {
  auto a = []() __attribute__((b(({
    return static_cast<const short &>(42.);
}
}
