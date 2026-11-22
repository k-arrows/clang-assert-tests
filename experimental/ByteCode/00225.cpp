// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: getSize
// EXPECT-CRASH-ASSERT: isUnknownSizeArray
// EXPECT-CRASH-ASSERT: of

struct S {
  int foo[(long)1e19];
};

S s = S();
