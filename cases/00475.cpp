// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: DeduceAutoType
// EXPECT-CRASH-ASSERT: isNull
// EXPECT-CRASH-ASSERT: substituting

int foo();
auto (*bar)(void, void) = foo;
