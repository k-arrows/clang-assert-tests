// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: elem
// EXPECT-CRASH-ASSERT: ReadOffset
// EXPECT-CRASH-ASSERT: getAllocSize

int foo[~(1i) == 2E3];
