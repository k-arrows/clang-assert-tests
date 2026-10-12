// RUN: clang++ -c -std=c++20 -fopenmp %s
// EXPECT-CRASH-ASSERT: EvaluateAndDiagnoseImmediateInvocation
// EXPECT-CRASH-ASSERT: FD
// EXPECT-CRASH-ASSERT: isImmediateFunction
// EXPECT-CRASH-ASSERT: expression

#pragma omp begin declare variant match(implementation = {vendor(llvm)})

struct S {
  int *p = new int(42);
  consteval S foo() const { return S{}; }
};

consteval const S &bar(const S &&s) { return s; }

void baz() {
  constexpr S s{nullptr};
  {
    S s1 = S().foo();
  }
  {
    S s2 = bar(S());
  }
}
