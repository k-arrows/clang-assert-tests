// RUN: clang++ -c -std=c++2c %s
// EXPECT-CRASH-ASSERT: tryCaptureVariable
// EXPECT-CRASH-ASSERT: MaxFunctionScopesIndex
// EXPECT-CRASH-ASSERT: FunctionScopeIndexToStopAt

void foo() {
  static constexpr int arr[]{1, 2, 3};
  int sum = 0;
  [n = 5, &sum]<class = void>() {
    template for (constexpr auto x : __FUNCTION__) { sum += n + x; }
  }();
}
