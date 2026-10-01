// RUN: clang++ -c %s
// EXPECT-FAIL
// SKIP: aarch64

typedef __fp16 exthalf4 __attribute__((ext_vector_type(-1u)));
void foo(exthalf4 x) {}
