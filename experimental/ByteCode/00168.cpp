// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-NOASSERT

typedef float v4f __attribute__((__vector_size__(16)));

static_assert(__builtin_reduce_min((v4f){1.123, 2.123, 3.123, 4.123}) == 0);
