// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: getThis
// EXPECT-CRASH-ASSERT: isBottomFrame

struct S {
  constexpr ~S() { delete[] new S[3]; };
};
