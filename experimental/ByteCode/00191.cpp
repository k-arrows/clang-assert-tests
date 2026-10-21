// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

struct S {
  S &operator=(const S &) = default;
  int val = 42;
};

constexpr bool foo() {
  S s1 { ; };
  S s2{};
  s2 = s1;
  return true;
}

static_assert(foo(), "");
