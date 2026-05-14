// RUN: clang++ -c -std=c++23 -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: cleanupAfterFunctionCall
// EXPECT-CRASH-ASSERT: getNumWrittenParams

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
