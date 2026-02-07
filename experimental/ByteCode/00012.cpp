// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: copyComposite
// EXPECT-CRASH-ASSERT: DestDesc
// EXPECT-CRASH-ASSERT: SrcDesc

const double x = 0.;

void foo() {
  _Complex double z;
  z = *(_Complex double *)&x;
};
