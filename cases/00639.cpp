// RUN: clang++ -c %s
// EXPECT-CRASH-NOASSERT

void foo() { __asm__("" ::"#"(0)); }
