// RUN: clang++ -c -x c -std=c23 %s
// EXPECT-CRASH-ASSERT: isEquivalent
// EXPECT-CRASH-ASSERT: isBuiltinType
// EXPECT-CRASH-ASSERT: isNull

struct S {
  enum E e;
};

struct S {
  e;
};
