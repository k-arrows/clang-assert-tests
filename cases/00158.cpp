// RUN: clang++ -c -x c %s
// EXPECT-CRASH-ASSERT: getTypeInfoImpl
// EXPECT-CRASH-ASSERT: getDeducedType
// EXPECT-CRASH-ASSERT: undeduced

_Atomic __auto_type foo = 42;
