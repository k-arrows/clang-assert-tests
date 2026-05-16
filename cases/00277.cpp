// RUN: clang++ -c -std=c++03 %s
// EXPECT-CRASH-ASSERT: getFoundDecl
// EXPECT-CRASH-ASSERT: LookupResultKind
// EXPECT-CRASH-ASSERT: non-unique

template <class A> struct alignas(A) foo {};
template <class A> struct alignas(A) bar {};
struct A baz{};
