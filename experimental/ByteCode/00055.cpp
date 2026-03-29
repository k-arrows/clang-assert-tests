// RUN: clang++ -c -x c -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

int a = 42;
int *b = &a;

void foo() { *b = (((_Complex double)1.0 ? 2 : 3), a); }
