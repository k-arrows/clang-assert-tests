// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: SubstType
// EXPECT-CRASH-ASSERT: CodeSynthesisContexts
// EXPECT-CRASH-ASSERT: Cannot
// EXPECT-CRASH-ASSERT: instantiation

template <typename... Ts> void foo(Ts...) {}
void bar(baz<Ts>) {
  auto L = [](auto... x) {
    return [](decltype(x)... y) {
      return [](int z)
        requires requires { foo(y..., z); }
      {};
    };
  };
  L(0, 1)(2, 3)(4);
}
