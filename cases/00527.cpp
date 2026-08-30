// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: DiagnoseUnexpandedParameterPack
// EXPECT-CRASH-ASSERT: Unexpanded.empty
// EXPECT-CRASH-ASSERT: Unable

template <typename... T> auto foo() {
  using P = int (*)(int((bar::*))[sizeof(sizeof(T))]);
}
