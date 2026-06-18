// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

void foo() { _Complex float z = *(_Complex double *)&(int[]){0}; }
