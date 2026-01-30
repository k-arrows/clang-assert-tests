// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: adjustCVQualifiersForCXXThisWithinLambda
// EXPECT-CRASH-ASSERT: isGenericLambdaCallOperatorSpecialization
// EXPECT-CRASH-ASSERT: While
// EXPECT-CRASH-ASSERT: enclosing
// EXPECT-CRASH-ASSERT: lambda-call-operator 

struct X {
  void foo() {
    auto L = [] { auto M = [](auto N = [this]) };
  };
};
