// RUN: clang++ --analyze -Xanalyzer -analyzer-output=text %s
// EXPECT-PASS

struct B {
} b;

struct A {
  struct B b;
} a;

void *memset(void *s, int c, const int &cond);

void foo() { memset(&a.b, 0, sizeof(b)); }
