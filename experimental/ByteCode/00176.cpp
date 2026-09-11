// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: SubPtr
// EXPECT-CRASH-ASSERT: ElemSize

struct A {
  char x;
};
struct B {
  char y;
};
struct C : A, B {};
unsigned char x = ((char **)(B *)(C *)0x1000) - (char *)0x1000;
