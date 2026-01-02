// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: CastConsistency
// EXPECT-CRASH-ASSERT: getSubExpr
// EXPECT-CRASH-ASSERT: isAnyPointerType
// EXPECT-CRASH-ASSERT: isBlockPointerType

template <typename T> struct S {
  int a;
  int (^b)() = a;
};
