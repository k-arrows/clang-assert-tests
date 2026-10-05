// RUN: clang++ -c -std=c++20 -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: deref
// EXPECT-CRASH-ASSERT: Offset
// EXPECT-CRASH-ASSERT: BS.Pointee

constexpr int foo() {
  int bar[] = {0;
  int *baz = bar;
  *baz = 42;
  return *baz;
}
}
