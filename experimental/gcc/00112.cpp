// RUN: clang++ -c -std=c++03 %s
// EXPECT-FAIL

struct S {
  S(S volatile &) = default;
} s;

void foo(...) {}
void bar() { foo(s); }
