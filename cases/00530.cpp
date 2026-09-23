// RUN: clang++ -c -std=c++20 %s
// EXPECT-FAIL

void foo() {}
void bar(foo...[0]) {}
