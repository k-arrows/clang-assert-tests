// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: toRValue
// EXPECT-CRASH-ASSERT: Record
// EXPECT-CRASH-ASSERT: Missing

struct S {};

void foo() { dynamic_cast<>(*((S *)"")); }
