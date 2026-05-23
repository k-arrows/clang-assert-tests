// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: ConceptSpecializationExpr
// EXPECT-CRASH-ASSERT: isValueDependent
// EXPECT-CRASH-ASSERT: isInstantiationDependent
// EXPECT-CRASH-ASSERT: value-dependent

template <class T, class U> constexpr bool bar = false;
template <class T, class U>
concept baz = bar<T, U>;
template <class T> struct X {};

template <class T1> auto foo() {
  static_assert(baz<decltype(foo<int>()), X<X<X<int>>>>);
}
