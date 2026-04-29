// RUN: clang++ -c -std=c++20 -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

struct S {
  virtual ~S() = default;
};

struct D : S {};

void foo() { const S &s = true ? static_cast<const S &>(D()) : D(); }
