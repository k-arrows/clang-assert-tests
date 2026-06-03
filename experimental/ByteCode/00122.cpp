// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: elem
// EXPECT-CRASH-ASSERT: ReadOffset
// EXPECT-CRASH-ASSERT: getAllocSize

auto foo = *(_Complex double *)&(bool[2]){};
