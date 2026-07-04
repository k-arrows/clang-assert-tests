// RUN: clang++ -c %s
// EXPECT-FAIL

struct S {
  S foo();
};
struct S::S;

S::foo() { return S(); }
