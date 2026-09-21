// RUN: clang++ -c %s
// EXPECT-FAIL

using V __attribute__((vector_size(8))) = int;

V v = {.v = 42};
