// RUN: clang++ -c %s
// EXPECT-FAIL

typedef __attribute__((ext_vector_type(0xDEADBEEF))) int vi4b;

struct S {
  vi4b w;
};

int &&s = S().w[1];
