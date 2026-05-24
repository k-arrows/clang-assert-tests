// RUN: clang++ -c -x c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: mul
// EXPECT-CRASH-ASSERT: A.isNumber
// EXPECT-CRASH-ASSERT: B.isNumber

struct S s;
int foo[2 * ((long)&s + 42i) == 2];
