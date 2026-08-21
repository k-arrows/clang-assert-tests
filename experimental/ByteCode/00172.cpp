// RUN: clang++ -c -std=c++26 -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

struct S {
  constexpr virtual int foo() { return 0; }
};

struct T {};

struct U : virtual T {
  constexpr S *bar() const { return (S *)this; }
};

constexpr U u;
static_assert(dynamic_cast<T *>(u.bar()));
