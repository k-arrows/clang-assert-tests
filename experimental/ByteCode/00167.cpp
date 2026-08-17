// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

constexpr int foo() {
bar: {}
bar:
  for (;;) {
    continue bar;
  }
  return 0;
}

static_assert(foo(), "");
