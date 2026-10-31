// RUN: clang++ -c -fms-compatibility -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-NOASSERT

int bar();

void foo() { static_assert(__builtin_memcmp(&bar, &bar, 1) == 0, ""); }
