// RUN: clang++ -std=c++03 --analyze %s
// EXPECT-CRASH-NOASSERT

typedef struct {
  char c[2];
} S;

S s();
void foo(char *);

void bar() { foo(s().c); }
