// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: elem
// EXPECT-CRASH-ASSERT: isPrimitiveArray

typedef __attribute__((vector_size(16))) int vi4a;
typedef long T __attribute__((vector_size(4 * sizeof(long))));

struct S {
  vi4a s;
};

int &&w = S().s[1];

void foo() { *(T *)&w = (T){0, 1, 2, 3}; }
