// RUN: clang++ -c -std=c++20 -fblocks %s
// EXPECT-CRASH-ASSERT: CheckTemplateArgument
// EXPECT-CRASH-ASSERT: isPointerOrReferenceType
// EXPECT-CRASH-ASSERT: isNullPtrType

template <void (^foo)()> struct T {};

T<nullptr> bar;
