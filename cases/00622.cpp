// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getPackExpansionType
// EXPECT-CRASH-ASSERT: ExpectPackInType
// EXPECT-CRASH-ASSERT: containsUnexpandedParameterPack
// EXPECT-CRASH-ASSERT: must

template <typename, typename... Args> struct S {
  template <int... Is> S<S<Args...>::template Foo<Is>...>;
};
