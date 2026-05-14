// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: compare
// EXPECT-CRASH-ASSERT: getSemantics
// EXPECT-CRASH-ASSERT: Should

void foo() {
  const long double i = -1;
  if (*(double *)&i == 42) {
    i = 0;
  }
}
