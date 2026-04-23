// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: DefineImplicitDefaultConstructor
// EXPECT-CRASH-ASSERT: isDefaulted
// EXPECT-CRASH-ASSERT: isDefaultConstructor
// EXPECT-CRASH-ASSERT: doesThisDeclarationHaveABody
// EXPECT-CRASH-ASSERT: isDeleted

template <typename T> struct S {
  S();
  constexpr const int *P *pp = &p;
};

template <typename T> S<T>::S() = default;

template struct S<int>;
