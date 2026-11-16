// RUN: clang++ -c -x c %s
// EXPECT-CRASH-ASSERT: AddOverloadCandidate
// EXPECT-CRASH-ASSERT: Proto
// EXPECT-CRASH-ASSERT: Functions

#pragma weak foo = bar
void foo();
void bar() { foo(); }
