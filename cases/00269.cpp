// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: CheckPointerToMemberOperands
// EXPECT-CRASH-ASSERT: hasPlaceholderType
// EXPECT-CRASH-ASSERT: placeholders

struct S {};

void foo() {}

void foo(S s) { int i = s->*foo; }
