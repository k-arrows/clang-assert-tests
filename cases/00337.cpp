// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getASTRecordLayout
// EXPECT-CRASH-ASSERT: declarations

struct S {
  S foo();
};
struct S::S;

S::foo() { return S(); }
