// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: CheckDeductionGuideDeclarator
// EXPECT-CRASH-ASSERT: Qualifiers
// EXPECT-CRASH-ASSERT: QualifiedTemplate

template <typename T> struct A {};
template <template <typename> typename TT> struct S {
  A(int)->TT<int>;
}()
