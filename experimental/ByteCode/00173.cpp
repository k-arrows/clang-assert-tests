// RUN: clang++ -c -fms-compatibility -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: isGlobalLValue
// EXPECT-CRASH-ASSERT: isLValue

struct A {
  auto foo;
  int i;
} a;

void bar() { __asm mov eax, a.i }
