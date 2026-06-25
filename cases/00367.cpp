// RUN: clang++ -c -std=c++20 %s
// EXPECT-CRASH-ASSERT: getPackAsArray
// EXPECT-CRASH-ASSERT: getKind

template <typename T, T...> struct S {};
template <long... N> using foo = S<unsigned long, N...>;

char bar[2] = foo();
