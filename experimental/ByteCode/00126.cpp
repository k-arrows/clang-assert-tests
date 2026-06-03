// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: EmitGlobalVarDefinition
// EXPECT-CRASH-ASSERT: CstSize
// EXPECT-CRASH-ASSERT: Emitted

auto foo = *(_Complex double *)&(float[2]){};
