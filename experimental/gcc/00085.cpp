// RUN: clang++ -c %s
// EXPECT-FAIL

template <typename... Ts> struct A {
  template <template <typename, Ts> class... Cs, Cs<int>... Vs> struct B {
    B(B<true>()) {}
  };
};
