// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: AddOverloadedCallCandidate
// EXPECT-CRASH-ASSERT: KnownValid
// EXPECT-CRASH-ASSERT: Explicit

void foo();

void bar() { (baz<>)(); }
