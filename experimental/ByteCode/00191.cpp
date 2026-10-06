// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: getSource
// EXPECT-CRASH-ASSERT: getCodeEnd
// EXPECT-CRASH-ASSERT: PC

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
