// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: resolveKind
// EXPECT-CRASH-ASSERT: ResultKind
// EXPECT-CRASH-ASSERT: NotFoundInCurrentInstantiation

void A;
extern int A;
class A;
A;
