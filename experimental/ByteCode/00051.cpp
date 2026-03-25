// RUN: clang++ -c -x c -fexperimental-new-constant-interpreter %s
// EXPECT-FAIL

_Static_assert(__builtin_strlen((void*)0 + 1) == 2, "");
