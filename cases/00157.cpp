// RUN: clang++ -c -x c %s
// EXPECT-CRASH-ASSERT: cast
// EXPECT-CRASH-ASSERT: isa
// EXPECT-CRASH-ASSERT: incompatible

struct S {
  struct SS {
  } *ss(int i) __attribute__((alloc_align(1)));
}
