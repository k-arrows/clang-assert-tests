// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: IsSameFloatAfterCast
// EXPECT-CRASH-ASSERT: value.isComplexFloat

constexpr _Complex double *z = 0;
constexpr float f = __real * z;
