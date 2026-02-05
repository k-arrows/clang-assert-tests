// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: visitBreakStmt
// EXPECT-CRASH-ASSERT: TargetLabel

constexpr int foo() {
bar:
  return 0;

bar:
  do {
    break bar;
  } while (0);
}
