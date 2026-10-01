// RUN: clang++ -c -x c %s
// EXPECT-FAIL

typedef double v4 __attribute__((vector_size(32)));

void foo() {
  _Atomic v4 x = {0, 1, 2, 3};
  x *= (v4){0, 1, 2, 3};
}
