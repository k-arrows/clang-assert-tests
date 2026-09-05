// RUN: clang++ -c -fopenacc -fms-compatibility %s
// EXPECT-CRASH-ASSERT: getExtValue
// EXPECT-CRASH-ASSERT: isRepresentableByInt64
// EXPECT-CRASH-ASSERT: int64_t

struct S {
  static constexpr size_t foo() { return -42; }
};

#pragma acc routine(S::foo) gang(dim : S::foo())
