// RUN: clang++ -c %s
// EXPECT-FAIL

struct S {
  constexpr S() {};
  auto a = []() {};
  template <typename> void foo() { constexpr S s[]{{}}; }
};
