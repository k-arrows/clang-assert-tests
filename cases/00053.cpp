// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: findInstantiationOf
// EXPECT-CRASH-ASSERT: isa
// EXPECT-CRASH-ASSERT: instantiated

template <int N> void foo() {
  if (auto [... t] = 0)
    static_assert(sizeof...(t) == 0, "");
}

void bar() { foo<0>(); }
