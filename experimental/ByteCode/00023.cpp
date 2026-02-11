// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: peekData
// EXPECT-CRASH-ASSERT: Ptr
// EXPECT-CRASH-ASSERT: Offset

void foo() {
  struct S {
    int &operator++(());
  };
  (S()++)++;
}
