// RUN: clang++ -c %s
// EXPECT-CRASH-NOASSERT

struct S {
  void foo(int n, auto... v[n] {};
};
