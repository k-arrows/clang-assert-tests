// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: get
// EXPECT-CRASH-ASSERT: NumElts
// EXPECT-CRASH-ASSERT: VectorType
// SKIP: aarch64

void foo(int *x, int y) { asm volatile("" : : "k"(x), "rm"(y) : "memory"); }
