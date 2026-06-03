// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: setComplexFloat
// EXPECT-CRASH-ASSERT: getSemantics
// EXPECT-CRASH-ASSERT: Invalid

auto foo = *(_Complex double *)&(int[2]){3, 4};
