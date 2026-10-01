// RUN: clang++ -c -std=c++23 -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

struct S {
  ~S() {};
};

void foo(int n) {
  S s[n][n];
  auto L = [=]() { int bar = sizeof(s[0]); };
}
