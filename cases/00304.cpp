// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: evaluateVarDeclInit
// EXPECT-CRASH-ASSERT: isLambdaCallOperator
// EXPECT-CRASH-ASSERT: getDeclContext
// EXPECT-CRASH-ASSERT: missing

constexpr int foo() {
  switch (1) {
    if (int n) {
    case 1:
      return n;
    }
  }
}
