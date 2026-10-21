// RUN: clang++ -c -std=c++23 -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

struct S {};

constexpr int f(int n) {
  S *s = new S[n];
  if (__builtin_is_within_lifetime(s)) {
  }
}

static_assert(f(42), "");
