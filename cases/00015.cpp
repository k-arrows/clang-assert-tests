// RUN: clang++ -c %s
// EXPECT-FAIL

struct S {
  struct T {};

  T t;

  void *foo() { void *p = &::t; }
}
