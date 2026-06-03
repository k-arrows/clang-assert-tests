// RUN: clang++ -c -x c -std=c23 %s
// EXPECT-FAIL

#define FOO(Ty, Name) alignas(Ty) char Name[sizeof(Ty)]

FOO(struct S { float *malloc(long) __attribute__((alloc_size(1))); }, buffer);
