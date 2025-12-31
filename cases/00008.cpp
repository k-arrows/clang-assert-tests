// RUN: clang++ -c -x c %s
// EXPECT-CRASH-ASSERT: getInit
// EXPECT-CRASH-ASSERT: getNumInits
// EXPECT-CRASH-ASSERT: Initializer

typedef int __attribute__((vector_size(8))) vec;

vec a[] = {(short *){1, 8193}, {{}, 0}};
