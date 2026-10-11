// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: TransformFunctionTypeParams
// EXPECT-CRASH-ASSERT: isDeduced
// EXPECT-CRASH-ASSERT: getDeducedType
// EXPECT-CRASH-ASSERT: undeduced

template <typename... T> auto foo() {
  using P = int (*)(int(... pack)[sizeof(sizeof(T))][]());
}

using a = decltype(foo<float, float>());
