// RUN: clang++ -c -std=c++23 -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

class A {
public:
  virtual void foo(int &i, ...) {}
};

constexpr int bar() {
  A a;
  int i;
  a.foo(i);
  return i;
}

static_assert(bar(), "");
