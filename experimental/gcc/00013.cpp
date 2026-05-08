// RUN: clang++ -c -std=c++2c %s
// EXPECT-FAIL

template <typename T> void foo() {
  int arr[1] = {1};
  static auto [a, ... b, c] = arr;
}

void bar() { foo<int>(); }
