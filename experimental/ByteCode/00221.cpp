// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: APInt
// EXPECT-CRASH-ASSERT: isUIntN
// EXPECT-CRASH-ASSERT: N-bit

struct S {
  int foo : 1;
} bar[100000000000000001][3];

void baz() { bar[100000000000000000][0].foo = 1; }
