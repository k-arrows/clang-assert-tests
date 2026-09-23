// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

struct S {};
struct T : S {};

void (T::*foo)(void *) = (void (S::*)(void *))(void (T::*)(void *))0;
