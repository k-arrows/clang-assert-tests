// RUN: clang++ -c %s
// EXPECT-FAIL

void foo(auto struct { auto x; });
