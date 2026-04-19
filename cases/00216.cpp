// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: SubstFunctionType
// EXPECT-CRASH-ASSERT: OldTInfo
// EXPECT-CRASH-ASSERT: substituting

template <class T> struct S {
  template <class U>
  using type1 = decltype([] {
    struct B {};
    B b;
  });

  void foo() { using T1 = S<int>::type1<int>; }
}
