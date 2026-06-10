// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: copyComposite
// EXPECT-CRASH-ASSERT: SrcDesc
// EXPECT-CRASH-ASSERT: DestDesc
// EXPECT-CRASH-ASSERT: getPrimType

void foo(void) {
  _Complex double cd;
  cd = *(_Complex double *)&(int[2]){};
}
