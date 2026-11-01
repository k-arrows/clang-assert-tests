// RUN: clang++ -std=c++23 -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

struct A {
  A((B));
  struct B {
  } b;
};

constexpr int foo() {
  A a, b;
  b = a;
}

static_assert(foo(), "");
