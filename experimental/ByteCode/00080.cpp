// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

typedef decltype(sizeof(int)) L;

void foo() { (L) & (*(int (*)[4]) nullptr)[0] - (L) && b; }
