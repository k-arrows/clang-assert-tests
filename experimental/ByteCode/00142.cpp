// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

constexpr int foo() {
  while (1) {
    (1.f / (2.f + 3i), 4.f);
  }
  return 42;
}

static_assert(foo() == 42, "");
