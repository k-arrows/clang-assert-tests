// RUN: clang++ -c %s
// EXPECT-FAIL

void foo(int (*g)(const char *h, ...) __attribute__((nonnull(2147483648))) __attribute__((nonnull))) { };
