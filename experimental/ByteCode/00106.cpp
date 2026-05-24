// RUN: clang++ -c -x c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: getPtr
// EXPECT-CRASH-ASSERT: AddrLabelDiff

void foo() { _Static_assert((long)&&bar - (long)&&baz - 42 == foo, ""); }
