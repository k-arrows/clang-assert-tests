// RUN: clang++ -std=c++14 --analyze -Xanalyzer -analyzer-output=text %s
// EXPECT-PASS

int foo();

void bar() throw() { foo(); }
