// RUN: clang++ -c -x c %s
// EXPECT-FAIL

typedef basetype __attribute__((hardbool(false, int2))) foo;
