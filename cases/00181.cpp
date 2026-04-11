// RUN: clang++ -x c --analyze -Xanalyzer -analyzer-output=text %s
// EXPECT-PASS

void foo(void *_Atomic);

void bar(int) { foo(0); }
