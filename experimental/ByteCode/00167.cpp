// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: visitContinueStmt
// EXPECT-CRASH-ASSERT: TargetLabel

constexpr int foo() {
bar: {}
bar:
  for (;;) {
    continue bar;
  }
  return 0;
}

static_assert(foo(), "");
