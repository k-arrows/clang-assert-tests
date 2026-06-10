// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

constexpr void foo() {
  int *m = (int *)&m;
  *m = 42;
}
