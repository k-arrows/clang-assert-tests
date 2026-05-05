// RUN: clang++ -c -ffixed-point -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: getFixedPointSemantics
// EXPECT-CRASH-ASSERT: isFixedPointType
// EXPECT-CRASH-ASSERT: isIntegerType
// EXPECT-CRASH-ASSERT: Can

struct S {
  _Accum s[2];
};

S s = S();
