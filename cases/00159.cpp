// RUN: clang++ -c -ffixed-point %s
// EXPECT-CRASH-NOASSERT

__complex__ int c1;
unsigned _Accum c2;

void foo() { c2 /= c1; }
