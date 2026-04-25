// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: defaultedCopyConstructorIsDeleted
// EXPECT-CRASH-ASSERT: needsOverloadResolutionForCopyConstructor
// EXPECT-CRASH-ASSERT: SMF_CopyConstructor
// EXPECT-CRASH-ASSERT: property

struct S1 {
  S1(S1 &);
};

struct S2 : S1 {
  S2(_Atomic S2 &);
};
