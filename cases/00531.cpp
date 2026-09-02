// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: ActOnExplicitInstantiation
// EXPECT-CRASH-ASSERT: IsDependent
// EXPECT-CRASH-ASSERT: handled

namespace foo {
template <int N> struct S {};
} // namespace foo

template struct foo::S<foo>::bar;
