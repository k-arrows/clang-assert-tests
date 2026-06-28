// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: TransformTemplateTypeParmType
// EXPECT-CRASH-ASSERT: TemplateArgument
// EXPECT-CRASH-ASSERT: mismatch

template <class D> constexpr bool C = false;

template <typename U> struct S {
  template <typename V, typename N> struct Foo {
    Foo(V, N);
  };

  template <typename X, typename N>
    requires(C<N>)
  Foo(X, N) -> Foo<X, N>;

  template <typename Y, typename Y2, int N = sizeof(Y2)>
  using Bar = Foo<decltype(N), Y2>;
};

S<double>::Bar s{4, 2};
