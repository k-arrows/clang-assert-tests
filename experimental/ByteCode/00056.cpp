// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

void foo() { _Complex double z = *(_Complex double *)&(int[]){0}; }
