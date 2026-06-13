// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-PASS

__attribute__((nonnull(1))) void foo(void *ptr);

void bar() { foo(static_cast<char *>((void *)6789)); }
