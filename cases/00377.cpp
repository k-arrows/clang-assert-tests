// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-NOASSERT

template <typename T, typename U>
concept Bar = false;

void foo() { Baz auto [a]; }
