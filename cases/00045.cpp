// RUN: clang++ -c %s
// EXPECT-CRASH-ASSERT: diagnoseArithmeticOnFunctionPointer
// EXPECT-CRASH-ASSERT: isAnyPointerType

_Atomic(int (*)(void)) a;
void foo() { a++; }
