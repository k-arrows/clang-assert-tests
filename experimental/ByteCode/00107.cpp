// RUN: clang++ -c -x c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: getASTRecordLayout
// EXPECT-CRASH-ASSERT: Cannot

#define FOO(num, expr) enum { test##num = (expr) };

struct S s;
FOO(50, &s < (struct S *)((int *)&s + 42))
