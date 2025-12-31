// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: AccessDeclContextCheck
// EXPECT-CRASH-ASSERT: AS_none

struct S {};

struct T {
  void operator delete(void *p){} : S

  {
    (enum e{a});
