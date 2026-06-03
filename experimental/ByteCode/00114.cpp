// RUN: clang++ -c -std=c++23 -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

struct S {};

void foo() {
  S *s = (foo *)malloc(sizeof(*s));
  S *&sref = s;
  for (int i = 0; i < 2; sref++)
    ;
}
