// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

struct S {
  constexpr ~S() { delete[] new S[3]; };
};
