// RUN: clang++ -c %s
// EXPECT-PASS

typedef struct S {
  _BitInt(123) a : 4;
  _BitInt(567) b : 8;
} S;

void foo(void) { static S s = {.a = 9}; }
