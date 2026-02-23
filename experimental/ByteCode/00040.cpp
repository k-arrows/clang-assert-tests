// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-NOASSERT

constexpr void foo() {
  F *f = /* missing */;

  delete f;
};
