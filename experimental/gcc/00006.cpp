// RUN: clang++ -c -std=c++23 -fopenmp %s
// EXPECT-FAIL

void foo(this int &a);
