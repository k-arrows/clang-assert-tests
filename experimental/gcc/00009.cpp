// RUN: clang++ -c %s
// EXPECT-FAIL

template <template <>> struct S;
template <template <typename> class C, typename... Ts> struct D<C, Ts...> {};
template <template <typename...> class C> struct S {
  template <typename... Ts> using foo = bar<D<C, Ts...>>;
};
