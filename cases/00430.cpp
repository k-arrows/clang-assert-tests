// RUN: clang++ -c -std=c++20 %s
// EXPECT-FAIL

template<typename T> struct S {};

template<>
template<typename U, bool V> requires V
constexpr int S<long>::foo;

template<>
template<typename U, bool V> requires V
constexpr int S<long>::foo;
