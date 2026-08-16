// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: RetVoid
// EXPECT-CRASH-ASSERT: getFrameOffset
// EXPECT-CRASH-ASSERT: Invalid

struct A {
} a;

struct S {
  A b = true ? a : (false ? a : c = 0;);
} s;
