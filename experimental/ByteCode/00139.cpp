// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: Pointer
// EXPECT-CRASH-ASSERT: Pointee

void foo() {
  constexpr int *p = (int[1]){0};
  static_assert(*p, "");
}
