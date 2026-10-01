// RUN: clang++ -c -std=c++23 -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

constexpr int &foo = foo;
int &bar = (bar, foo);
