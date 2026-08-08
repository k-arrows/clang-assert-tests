// RUN: clang++ -c -std=c++26 %s
// EXPECT-CRASH-ASSERT: TemplateInstantiator
// EXPECT-CRASH-ASSERT: CodeSynthesisContexts
// EXPECT-CRASH-ASSERT: isSFINAEContext
// EXPECT-CRASH-ASSERT: Cannot
// EXPECT-CRASH-ASSERT: instantiation

struct S {
  Foo(Foo &&);
};

template <int> std { struct tuple_size; };

struct V {
  int i, j;
};

template <> struct std::tuple_size<V> {
  static const int value = 2;
};
template <int I> struct std::tuple_element<I, V> {
  using type = int;
};

template <> struct std::tuple_size<V> {
  static const int value = 2;
};
template <int I> struct std::tuple_element<I, V> {
  using type = int;
};

void bar() { template for (auto i : V{42, 10}) i += (V.i == 42); }
