// RUN: clang++ -c -std=c++20 -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: allElementsInitialized
// EXPECT-CRASH-ASSERT: isPrimitiveArray

struct {
  int a[1 << 30];
} s;
