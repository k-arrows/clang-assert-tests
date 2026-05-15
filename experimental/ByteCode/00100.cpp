// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: APInt
// EXPECT-CRASH-ASSERT: isUIntN
// EXPECT-CRASH-ASSERT: N-bit

auto foo = *(_Complex double *)&(int[2]){};
