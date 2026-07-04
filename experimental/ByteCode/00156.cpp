// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: SubPtr
// EXPECT-CRASH-ASSERT: ElemSize

void foo() { const char (*bar)[12] = new int[3][&bar + 12 - &bar]; }
