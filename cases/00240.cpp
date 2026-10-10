// RUN: clang++ -c %s
// EXPECT-FAIL

struct S {};

extern const S s;
__attribute__((alias("foo"), weakref)) const S s;
