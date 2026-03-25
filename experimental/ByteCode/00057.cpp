// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: Descriptor
// EXPECT-CRASH-ASSERT: ElemSize

typedef unsigned long ulong __attribute__((ext_vector_type(0xffffffff)));

void foo(long l) {
  ulong vl = l;
  vl = l + vl;
}
