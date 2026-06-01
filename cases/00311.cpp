// RUN: clang++ -c -std=c++2c %s
// EXPECT-CRASH-ASSERT: TryListInitialization
// EXPECT-CRASH-ASSERT: hasSameUnqualifiedType
// EXPECT-CRASH-ASSERT: Deduced

void foo() {
  typedef int arr[42];
  while (arr[x] = {0})
    ;
}
