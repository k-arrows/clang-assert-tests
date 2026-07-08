// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: isReferenceToNonConstCapture
// EXPECT-CRASH-ASSERT: Binding

void foo() {
  return ^{
    int arr[] = {1, 2};
    auto [e1, e2] = arr;
    auto lambda = [e1] { e1 = 42; };
  };
}
