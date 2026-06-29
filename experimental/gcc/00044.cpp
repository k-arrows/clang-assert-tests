// RUN: clang++ -c -std=c++2c %s
// EXPECT-FAIL

void foo() { template for (void bar()); }
