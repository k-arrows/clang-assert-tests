// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: invokeCtor
// EXPECT-CRASH-ASSERT: IsInitialized

constexpr void foo() {
  bool b = false;
  while (!b) {
    while (int x = 0)
      ;
  }
}
