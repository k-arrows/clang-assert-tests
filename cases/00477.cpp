// RUN: clang++ -c -fms-compatibility %s
// EXPECT-CRASH-ASSERT: MakeMicrosoftSuper
// EXPECT-CRASH-ASSERT: getSourceRange
// EXPECT-CRASH-ASSERT: NestedNameSpecifierLoc

struct S {};

struct SS : S {
  ::__super::;
};
