// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

typedef float __m128 __attribute__((__vector_size__(16)));

void foo(__m128 a) { (__builtin_shufflevector(a, a, 0, 1), 0); }
