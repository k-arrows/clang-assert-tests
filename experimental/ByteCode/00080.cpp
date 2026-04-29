// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: getPtr
// EXPECT-CRASH-ASSERT: isNumber

typedef decltype(sizeof(int)) L;

void foo() { (L) & (*(int (*)[4]) nullptr)[0] - (L) && b; }
