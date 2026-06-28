// RUN: clang++ -c %s
// EXPECT-FAIL

struct S {
  void foo(double s, struct s;);
};
