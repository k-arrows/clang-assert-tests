// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-ASSERT: operator*
// EXPECT-CRASH-ASSERT: bool

typedef char vs4 __attribute__((vector_size(4)));
_Atomic vs4 foo = (vs4)0xDEADBEEF;
