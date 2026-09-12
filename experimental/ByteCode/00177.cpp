// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: castBackMemberPointer
// EXPECT-CRASH-ASSERT: Expected

struct S {};
struct T : S {};

void (T::*foo)(void *) = (void (S::*)(void *))(void (T::*)(void *))0;
