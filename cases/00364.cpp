// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: CastConsistency
// EXPECT-CRASH-ASSERT: isMemberPointerType

struct S {};

void foo() {
  void (S::*s)();
  (int(S::*_Atomic)())(s);
}
