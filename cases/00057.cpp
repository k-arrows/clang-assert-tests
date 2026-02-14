// RUN: clang++ -c -x c %s
// EXPECT-FAIL

void foo() { assert(_Countof({})); }
