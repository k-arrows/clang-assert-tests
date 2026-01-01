// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: DiagnoseUnexpandedParameterPack
// EXPECT-CRASH-ASSERT: Unexpanded
// EXPECT-CRASH-ASSERT: LambdaReferencingOuterPacks
// EXPECT-CRASH-ASSERT: parameter

template <class X> void foo(X) {
  [&]<class... T>(T &&) {};
}

void bar() {
  auto P = [](&&...) {};
  foo(P);
}
