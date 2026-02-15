// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: diagnoseListInit
// EXPECT-CRASH-ASSERT: HadError
// EXPECT-CRASH-ASSERT: Inconsistent

struct S {
  int __attribute__((unavailable)) i;
};

struct S s[] = {{0}};
