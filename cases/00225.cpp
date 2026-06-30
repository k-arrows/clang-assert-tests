// RUN: clang++ -c -std=c++20 %s
// EXPECT-FAIL

constexpr int foo(auto... p) { return p...[0xffffffffffffffff]; }
