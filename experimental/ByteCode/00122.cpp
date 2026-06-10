// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: copyComposite
// EXPECT-CRASH-ASSERT: SrcDesc
// EXPECT-CRASH-ASSERT: DestDesc
// EXPECT-CRASH-ASSERT: getPrimType

auto foo = *(_Complex double *)&(bool[2]){};
