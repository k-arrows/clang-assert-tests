// RUN: clang++ -c %s
// EXPECT-FAIL

struct S {
  static void foo{[]};
};
