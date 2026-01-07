// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: CastConsistency
// EXPECT-CRASH-ASSERT: isBooleanType
// EXPECT-CRASH-ASSERT: unheralded

enum E : bool {
  v = operator new(sizeof(int[2]),
};
