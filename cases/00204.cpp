// RUN: clang++ -c -std=c++26 %s
// EXPECT-CRASH-ASSERT: ActOnFinishFunctionBody
// EXPECT-CRASH-ASSERT: MaybeODRUseExprs
// EXPECT-CRASH-ASSERT: Leftover

struct S {
  int i;
  long j;
};

void foo() {
  constexpr S s[1] = {{42}};
  constexpr auto [a] = s;
}
