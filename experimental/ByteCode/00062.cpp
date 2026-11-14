// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

extern double INT128_MIN = -INT128_MAX - 1;
