// RUN: clang++ -c -x c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: APInt
// EXPECT-CRASH-ASSERT: isUIntN
// EXPECT-CRASH-ASSERT: N-bit

void f(void);
struct S {
  char c;
} s;
_Static_assert(&s != (unsigned _BitInt(13)) & f, "");
