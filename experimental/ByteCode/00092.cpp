// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

int foo[(long)(bool *)0];
