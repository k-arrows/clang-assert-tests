// RUN: clang++ -c -std=c++20 -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-NOASSERT

int foo[42] = /* missing */;
int (&bar)[] = {foo};
