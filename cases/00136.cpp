// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getLVForDecl
// EXPECT-CRASH-ASSERT: getLinkage
// EXPECT-CRASH-ASSERT: OldLinkage

struct A {
  static int i;
} __attribute__((internal_linkage));

int A::i;
