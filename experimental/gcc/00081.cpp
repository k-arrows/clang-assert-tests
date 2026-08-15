// RUN: clang++ -c %s
// EXPECT-FAIL

struct S {
} s[2];

template <typename T> int bar() {
  auto [m, n] = s;
  auto auto [o, p] = s;
  return 0;
}

int (*q)() = &bar<S>;
