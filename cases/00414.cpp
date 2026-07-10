// RUN: clang++ -c -fms-compatibility %s
// EXPECT-CRASH-ASSERT: MergeAccess
// EXPECT-CRASH-ASSERT: DeclAccess

class A {
private:
  void foo(int *);
};
class B : public A {};

struct C : private B {
  void bar() { __super::foo(); }
};
