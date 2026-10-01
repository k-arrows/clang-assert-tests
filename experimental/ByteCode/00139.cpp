// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

void foo() {
  constexpr int *p = (int[1]){0};
  static_assert(*p, "");
}
