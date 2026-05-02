// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: alignTo
// EXPECT-CRASH-ASSERT: 0u
// EXPECT-CRASH-ASSERT: can't

typedef __attribute__((ext_vector_type(0xDEADBEEF))) int vi4b;

struct S {
  vi4b w;
};

int &&s = S().w[1];
