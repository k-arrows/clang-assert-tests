// RUN: clang++ -c -x c %s
// EXPECT-PASS

typedef unsigned V __attribute__((vector_size(64)));

void foo(V v) { v[0] = v[0xffffffffffffffffwb]; }
