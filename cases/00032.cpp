// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: cast
// EXPECT-CRASH-ASSERT: isa
// EXPECT-CRASH-ASSERT: incompatible

typedef struct S {
  _BitInt(123) a : 4;
  _BitInt(567) b : 8;
} S;

void foo(void) { static S s = {.a = 9}; }
