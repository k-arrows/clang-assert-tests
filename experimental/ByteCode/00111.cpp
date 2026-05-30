// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: trunc
// EXPECT-CRASH-ASSERT: BitWidth
// EXPECT-CRASH-ASSERT: Invalid

struct S {
  __int128 foo : 1234;
};

struct D : S {};

void foo() { const S &s = true ? static_cast<const S &>(D()) : D(); }
