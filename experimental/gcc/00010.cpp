// RUN: clang++ -c %s
// EXPECT-FAIL

struct S {
  void foo(S s, int auto : *p) { int i = s->*p; }
}
