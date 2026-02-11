// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: interp__builtin_nan
// EXPECT-CRASH-ASSERT: isPrimitiveArray

struct {
} const s;

#define str ((const char *)&s)

void foo() { (__builtin_nanl(str) == 0); }
