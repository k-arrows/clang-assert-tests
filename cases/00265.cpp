// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: InstantiatedLocal
// EXPECT-CRASH-ASSERT: Current
// EXPECT-CRASH-ASSERT: inner

template <typename T> struct S {
  static constexpr auto s(auto) {}
  auto s(int)
    requires true
  {
    return s.foo;
  }
};

static_assert(S<int[3]>{}.s(0) == 2);
