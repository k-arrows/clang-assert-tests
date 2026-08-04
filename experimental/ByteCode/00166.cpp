// RUN: clang++ -c -std=c++20 -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: CheckArrayInitialized
// EXPECT-CRASH-ASSERT: ElemDesc
// EXPECT-CRASH-ASSERT: isArray

struct S {
  const S(foo[42]) : bar{};
};

struct F {
  _Atomic(S) a;
  constexpr F(int i) {};
};

F foo(42);
