// RUN: clang++ -c -std=c++2d %s
// EXPECT-CRASH-ASSERT: getMoreSpecializedTrailingPackTieBreaker
// EXPECT-CRASH-ASSERT: IsPack
// EXPECT-CRASH-ASSERT: TemplateArgument

template <class T> struct S {};
template <unsigned N, template <> class... TT> void foo(TT...[N]<int>);
template <unsigned N, template <class> class... TT> void foo(TT...[N]<int>);

void bar() { foo<1, S, S>(S<int>{}); }
