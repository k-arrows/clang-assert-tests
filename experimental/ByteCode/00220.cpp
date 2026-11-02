// RUN: clang++ -c -x c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: elemsOfSameArray
// EXPECT-CRASH-ASSERT: B.isBlockPointer

int foo(int n) {
  static const int m = n;
  return &m - &m;
}
