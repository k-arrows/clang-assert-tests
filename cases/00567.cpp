// RUN: clang++ --analyze %s
// EXPECT-CRASH-ASSERT: evalBinOpLN
// EXPECT-CRASH-ASSERT: isComparisonOp
// EXPECT-CRASH-ASSERT: arguments

struct B {
} b;

struct A {
  struct B b;
} a;

void *memset(void *s, int c, const int &cond);

void foo() { memset(&a.b, 0, sizeof(b)); }
