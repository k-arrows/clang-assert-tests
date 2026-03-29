// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: EvaluateWithSubstitution
// EXPECT-CRASH-ASSERT: isValueDependent
// EXPECT-CRASH-ASSERT: evaluator

using size_t = decltype(sizeof(int));

struct S {
  void *operator new[](size_t i)
      __attribute__((diagnose_if(i == *sizeof(int), "error", "warning")));
};

void foo() { new S[42]; }
