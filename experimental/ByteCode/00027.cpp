// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

int t();

void foo() { double u = *(long double *)&t; }
