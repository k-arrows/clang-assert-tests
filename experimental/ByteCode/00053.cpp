// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: elem
// EXPECT-CRASH-ASSERT: ReadOffset
// EXPECT-CRASH-ASSERT: getAllocSize

void foo(void) {
  _Complex double cd;
  cd = *(_Complex double *)&(int[2]){};
}
