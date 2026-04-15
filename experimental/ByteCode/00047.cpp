// RUN: clang++ -c -x c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

void f(void);
struct S {
  char c;
} s;
_Static_assert(&s != (unsigned _BitInt(13)) & f, "");
