// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: Create
// EXPECT-CRASH-ASSERT: ConstantExpr

struct S {
  int s;
};
consteval int foo(S s) { return 42; }

S s() { return {}; };
S ss = (S){foo(s(0))};
