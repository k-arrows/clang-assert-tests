// RUN: clang++ -c -x c %s
// EXPECT-FAIL

struct S {
  struct SS {
  } *ss(int i) __attribute__((alloc_align(1)));
}
