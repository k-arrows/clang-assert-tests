// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

struct S {
  template <typename T> constexpr S(T, ...) {}
};

struct SS : S {
  using S::S;
};

SS ss(42);
