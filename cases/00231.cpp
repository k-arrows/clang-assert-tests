// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: CheckCompletedCoroutineBody
// EXPECT-CRASH-ASSERT: isInvalidDecl
// EXPECT-CRASH-ASSERT: declarations

class C {};

C Foo() : bar { co_await ({}) }
