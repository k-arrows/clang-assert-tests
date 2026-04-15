// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

typedef char __attribute__((__vector_size__(64))) V;

void foo() {
  _Complex double x;
  V y;
  V z = x + y;
}
