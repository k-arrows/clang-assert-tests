// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: isConstantSizeType
// EXPECT-CRASH-ASSERT: isIncompleteType
// EXPECT-CRASH-ASSERT: incomplete

struct S {
static_assert([] {
    S *p;
    (__datasizeof(*p) == 8);
}
}
