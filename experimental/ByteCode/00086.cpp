// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: elem
// EXPECT-CRASH-ASSERT: ReadOffset
// EXPECT-CRASH-ASSERT: getAllocSize

typedef float __m128 __attribute__((__vector_size__(16)));
constexpr __m128 foo{1.0f, 2.0f, 3.0f, 4.0f};
typedef long T __attribute__((vector_size(4 * sizeof(long))));

void bar(void) { *(T *)&foo = (T{0, 1, 2, 3}); }
