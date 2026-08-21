// RUN: clang++ -c -fms-compatibility -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: setFrom
// EXPECT-CRASH-ASSERT: isLValue
// EXPECT-CRASH-ASSERT: non-LValue

struct A {
  auto foo;
  int i;
} a;

void bar() { __asm mov eax, a.i }
