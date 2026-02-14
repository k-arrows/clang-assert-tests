// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

struct {
} const s;

#define str ((const char *)&s)

void foo() { (__builtin_nanl(str) == 0); }
