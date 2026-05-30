// RUN: clang++ -c -std=c++2b -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

struct S {
  int operator()(this S, ...) { return 42; }
};

S s;
static_assert(s() == 42);
