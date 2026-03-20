// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

constexpr void foo() {
  bool b = false;
  while (!b) {
    while (int x = 0)
      ;
  }
}
