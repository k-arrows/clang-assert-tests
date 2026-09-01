// RUN: clang++ -c -std=c++03 %s
// EXPECT-FAIL

template <int... T>
requires <T...[0]>
