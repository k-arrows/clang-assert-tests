// RUN: clang++ -c -std=c++23 %s
// EXPECT-FAIL

void foo(this int = {42});
struct S {
  S() { foo(); }
} s;
