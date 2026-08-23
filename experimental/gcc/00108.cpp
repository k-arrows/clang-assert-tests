// RUN: clang++ -c -fopenacc %s
// EXPECT-FAIL

typedef char a;

void foo() {
#pragma acc cache(a[ : ][ : ])
}
