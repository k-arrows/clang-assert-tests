// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: VerifyIndirectJumps
// EXPECT-CRASH-ASSERT: Permissive
// EXPECT-CRASH-ASSERT: LabelAndGotoScopes

template <int i> void foo() {
  void *l = i ? &&l1 : &&l2;
  goto *l;
}

template void foo<0>();
