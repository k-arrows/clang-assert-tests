// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: VisitMemberPointerTypeLoc
// EXPECT-CRASH-ASSERT: DeclaratorChunk

template <typename T> void foo() {
  struct C;
  void (C::*foo)() __attribute__((vector_size(32)));
}
