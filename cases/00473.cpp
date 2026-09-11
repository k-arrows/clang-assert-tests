// RUN: clang++ -c %s
// EXPECT-FAIL

using vec __attribute__((vector_size(16))) = int &bar;
int baz = __builtin_vectorelements(vec);
