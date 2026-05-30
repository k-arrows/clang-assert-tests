// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: LookupTemplateName
// EXPECT-CRASH-ASSERT: isIncompleteType
// EXPECT-CRASH-ASSERT: ObjectType
// EXPECT-CRASH-ASSERT: isEntityBeingDefined
// EXPECT-CRASH-ASSERT: Caller

struct S { enum E };

int foo() { return E().bar<>; }
