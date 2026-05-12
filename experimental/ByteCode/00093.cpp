// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: asBlockPointer
// EXPECT-CRASH-ASSERT: isBlockPointer

constexpr void foo() {
  int *m = (int *)&m;
  *m = 42;
}
