// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: IsSameFloatAfterCast
// EXPECT-CRASH-ASSERT: isComplexFloat

int t();

void foo() { double u = *(long double *)&t; }
