// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: initializeFullCopy
// EXPECT-CRASH-ASSERT: getType
// EXPECT-CRASH-ASSERT: Other

_Atomic _Atomic(void) foo;
