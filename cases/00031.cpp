// RUN: clang++ -c -x c %s
// EXPECT-CRASH-ASSERT: getExtValue
// EXPECT-CRASH-ASSERT: isRepresentableByInt64
// EXPECT-CRASH-ASSERT: int64_t

typedef unsigned V __attribute__((vector_size(64)));

void foo(V v) { v[0] = v[0xffffffffffffffffwb]; }
