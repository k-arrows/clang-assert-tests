// RUN: clang++ -c -std=c++20 -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: truncate
// EXPECT-CRASH-ASSERT: TruncBits

struct S {
  int i : 0x100000000LL {42};
};

static_assert(S{}.i == 42, "");
