// RUN: clang++ -c -fopenacc -fms-compatibility %s
// EXPECT-FAIL

struct S {
  static constexpr size_t foo() { return -42; }
};

#pragma acc routine(S::foo) gang(dim : S::foo())
