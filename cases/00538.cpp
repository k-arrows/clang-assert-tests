// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: LookupSpecialMember
// EXPECT-CRASH-ASSERT: DefaultConstructor
// EXPECT-CRASH-ASSERT: empty

template <class T> struct A {
  struct B {
  } b;
};

template <> struct A<char>::B {};
template <> void A<char>::B::foo() {}

template <class U> void A<char>::C<U>::foo() {}
