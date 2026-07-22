// RUN: clang++ -c -std=c++23 %s
// EXPECT-FAIL

void foo(int *a) { a[42, [bar]]; }
