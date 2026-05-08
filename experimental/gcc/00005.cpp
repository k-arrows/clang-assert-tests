// RUN: clang++ -c %s
// EXPECT-FAIL

template <class...> struct A {
  template <class... ArgTs> A(ArgTs) {}
};

template <class... Ts> using AA = A<Ts..., Ts...>;

AA a{};
