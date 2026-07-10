// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: transformTemplateParam
// EXPECT-CRASH-ASSERT: NewT.isNull

template <void E> struct S {};
template <int... E> using A = S<E...>;

A foo{42};
