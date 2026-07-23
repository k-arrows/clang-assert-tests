// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-NOASSERT

template <typename T>
concept C = false;

void foo() { _Atomic C<> auto &foo = 42; };
