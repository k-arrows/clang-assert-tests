// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

constexpr int &foo(int *arr, size_t idx) { return arr[idx]; }

void bar() {
  int val[] = {1, 2, 3, 4};
  foo(val, 2) = 42;
}
