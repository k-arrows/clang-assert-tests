// RUN: clang++ -c %s
// EXPECT-FAIL

template <int qux> void bar() {
  int foo = (int *)__builtin_assume_aligned(baz, qux + 1);
}
