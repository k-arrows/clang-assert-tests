// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: checkValue
// EXPECT-CRASH-ASSERT: UserMaxValue
// EXPECT-CRASH-ASSERT: big

typedef __fp16 exthalf4 __attribute__((ext_vector_type(-1u)));
void foo(exthalf4 x) {}
