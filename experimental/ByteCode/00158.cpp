// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

struct S {
  constexpr S(int = ;
};

struct SS : S {
  using S::S;
};

SS ss{42};
