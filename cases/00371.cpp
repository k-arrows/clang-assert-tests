// RUN: clang++ --analyze -fopenmp %s
// EXPECT-FAIL

void foo() { asm volatile("" : "+f"(__LINE__)); }
