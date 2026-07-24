// RUN: clang++ -c -fms-compatibility %s
// EXPECT-CRASH-ASSERT: ParseIntelInlineAsmIdentifier
// EXPECT-CRASH-ASSERT: getPointer
// EXPECT-CRASH-ASSERT: InlineAsmIdentifierInfo
// EXPECT-CRASH-ASSERT: claimed
// SKIP: aarch64

struct A {
  struct B {
  } b;
};

namespace N {
A a;
}

void foo() { __asm mov eax, N::a.b.__is_trivially_relocatable }
