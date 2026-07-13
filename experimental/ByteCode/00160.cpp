// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: peekData
// EXPECT-CRASH-ASSERT: Ptr
// EXPECT-CRASH-ASSERT: Offset

template <typename T> struct S {};

template <> struct S<double> {
  int foo(int (&)[bar()]) { return 42; }
};

template <> struct S<long> {
  int baz(long d) { return 42; }
};

int qux() {
  S<double> d;
  S<long> l;
  return d.foo(1.0) + l.baz(1);
}
