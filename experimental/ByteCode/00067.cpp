// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

double foo = (long)&foo;
