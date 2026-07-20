// RUN: clang++ -c %s
// EXPECT-FAIL

template <typename... Ts> struct A {
  template <template <typename, Ts = 0> class... Cs, Cs<Ts>... Vs> struct B {};
};

A<short>::B<char> foo;
