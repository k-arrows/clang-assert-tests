// RUN: clang++ -c %s
// EXPECT-FAIL

struct S {};

template <class... Ts> struct D {
  using typename Ts::foo::bar...;
};

template struct D<S>;
