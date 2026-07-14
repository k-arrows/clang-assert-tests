// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: transformConstructor
// EXPECT-CRASH-ASSERT: getDepthAndIndex
// EXPECT-CRASH-ASSERT: Unexpected

template <typename X, typename Y> struct S {
  static constexpr bool value = false;
};

template <typename X> struct S<int, int> {
  static constexpr float value = Foo::Bar()
};

template <typename T> struct SS {
  template <typename U> SS(U &&) {}
};

template <typename A> SS(A) -> SS<A>;
