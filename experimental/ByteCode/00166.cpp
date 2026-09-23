// RUN: clang++ -c -std=c++20 -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

struct S {
  const S(foo[42]) : bar{};
};

struct F {
  _Atomic(S) a;
  constexpr F(int i) {};
};

F foo(42);
