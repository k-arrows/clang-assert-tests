// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: MarkFunctionReferenced
// EXPECT-CRASH-ASSERT: function?

struct S { ~S() = delete__alignof(s); };
decltype(S()) *foo;
