// RUN: clang++ -c -std=c++20 %s
// EXPECT-FAIL

struct S {};
S::operator=(S<typename T> auto);
