// RUN: clang++ -c -x c %s
// EXPECT-FAIL

typedef int __attribute__((vector_size(8))) vec;

vec a[] = {(short *){1, 8193}, {{}, 0}};
