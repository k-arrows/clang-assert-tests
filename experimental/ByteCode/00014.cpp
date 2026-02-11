// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

constexpr int foo() {
  int m = 1;
  return __builtin_vectorelements * 10 + m;
}

static_assert(foo() == 11);
