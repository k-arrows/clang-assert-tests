// RUN: clang++ -c -std=c++03 %s
// EXPECT-FAIL

struct S {
  template <class T> void __attribute__((aligned(S()))) foo() {}
};
