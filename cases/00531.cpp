// RUN: clang++ -c %s
// EXPECT-FAIL

namespace foo {
template <int N> struct S {};
} // namespace foo

template struct foo::S<foo>::bar;
