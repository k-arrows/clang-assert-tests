// RUN: clang++ -x c --analyze %s
// EXPECT-CRASH-ASSERT: makeNullWithType
// EXPECT-CRASH-ASSERT: isPointerType
// EXPECT-CRASH-ASSERT: isObjCObjectPointerType
// EXPECT-CRASH-ASSERT: isBlockPointerType
// EXPECT-CRASH-ASSERT: isNullPtrType
// EXPECT-CRASH-ASSERT: isReferenceType
// EXPECT-CRASH-ASSERT: must

void foo(void *_Atomic);

void bar(int) { foo(0); }
