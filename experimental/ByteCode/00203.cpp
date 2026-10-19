// RUN: clang++ -c -fexperimental-new-constant-interpreter %s
// EXPECT-CRASH-NOASSERT

void foo() {
  unsigned char bar[2];
  __builtin_stdc_memreverse8(1, bar + 2);
}
