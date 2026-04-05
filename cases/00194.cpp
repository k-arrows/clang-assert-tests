// RUN: clang++ -c -std=c++20 -fblocks %s
// EXPECT-FAIL

template <void (^foo)()> struct T {};

T<nullptr> bar;
