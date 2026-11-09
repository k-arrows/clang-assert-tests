// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: LookupSpecialMember
// EXPECT-CRASH-ASSERT: UsingDecl
// EXPECT-CRASH-ASSERT: illegal

template <typename... T> struct V : virtual T... {
  using T::operator=...;
};
template <typename... T> struct S : V<T...> {};
template <typename... T> struct D : S<T...> {};

struct A {};
struct B {};
struct SS : D<A, B> {};
