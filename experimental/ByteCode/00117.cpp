// RUN: clang++ -c -std=c++23 -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: getBase
// EXPECT-CRASH-ASSERT: getNumBases

struct S {
  ~S() {}
};

struct SS : virtual S {};

void foo() { SS ss; }
