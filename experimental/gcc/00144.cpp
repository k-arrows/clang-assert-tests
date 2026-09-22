// RUN: clang++ --analyze -Xanalyzer -analyzer-output=text %s
// EXPECT-PASS

void foo();
void *bar[2];

void baz() {
  __builtin_setjmp(bar);
  foo();
}
