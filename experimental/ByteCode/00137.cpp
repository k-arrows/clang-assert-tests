// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

double _Complex z = *(double _Complex *)&(*(int *)0x1234);
