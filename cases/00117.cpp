// RUN: clang++ --analyze -Xanalyzer -analyzer-output=text %s
// EXPECT-PASS

void foo(int x) { [[assume(x == 42 ? true : throw 1)]]; }
