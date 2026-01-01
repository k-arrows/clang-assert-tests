// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: isSugared
// EXPECT-CRASH-ASSERT: D1
// EXPECT-CRASH-ASSERT: D2

struct S {
  struct T {};

  T t;

  void *foo() { void *p = &::t; }
}
