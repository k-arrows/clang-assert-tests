// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getCommonSugaredType
// EXPECT-CRASH-ASSERT: hasSameUnqualifiedType
// EXPECT-CRASH-ASSERT: hasSameType

struct S {};

const void *x;
void *y;

S s = 0 ? *x : *y;
