// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: BuildUsingDeclaration
// EXPECT-CRASH-ASSERT: isInvalid
// EXPECT-CRASH-ASSERT: CXXScopeSpec

class C1;
class C2 {
  using C1::operator()<>();
};
