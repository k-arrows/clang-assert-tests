// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: getInit
// EXPECT-CRASH-ASSERT: getNumInits
// EXPECT-CRASH-ASSERT: Initializer

struct S {
  int i : 1;
  int j : 2;
};

S s = {3, (S){}, .i = 4};
