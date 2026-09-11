// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

int (*foo)[42] = new int[3][&foo + 42 - &(*(int *)0x1234)];
