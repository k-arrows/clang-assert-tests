// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-NOASSERT

template <typename T> struct S {
} __attribute__((aligned(foo<T>())));

S<int> s[2];
