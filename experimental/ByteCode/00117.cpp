// RUN: clang++ -c -std=c++23 -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

struct S {
  ~S() {}
};

struct SS : virtual S {};

void foo() { SS ss; }
