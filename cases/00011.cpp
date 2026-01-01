// RUN: clang++ -c -x c %s
// EXPECT-CRASH-ASSERT: doit
// EXPECT-CRASH-ASSERT: Val
// EXPECT-CRASH-ASSERT: null

int foo(int x(bar)...
