// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

int foo[~(1i) == 2E3];
