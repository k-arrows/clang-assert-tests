// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: elem
// EXPECT-CRASH-ASSERT: getNumElems

void foo() { _Complex double z = *(_Complex double *)&(int[]){0}; }
