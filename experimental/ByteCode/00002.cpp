// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: emitFloat
// EXPECT-CRASH-ASSERT: DiscardResult
// EXPECT-CRASH-ASSERT: Should've

void foo() {
  (1.f / (2.f + 3i), 4.f);
}
