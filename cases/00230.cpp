// RUN: clang++ -c %s
// EXPECT-CRASH-NOASSERT

template <int qux> void bar() {
  int foo = (int *)__builtin_assume_aligned(baz, qux + 1);
}
