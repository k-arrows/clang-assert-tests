// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

constexpr void foo() {
  F *f = /* missing */;

  delete f;
};
