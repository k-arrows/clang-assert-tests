// RUN: clang++ -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-NOASSERT

struct S {
  int a;
};

constexpr S s[1][0x87654321] = {};
static_assert(s[1][0].a == 42);
